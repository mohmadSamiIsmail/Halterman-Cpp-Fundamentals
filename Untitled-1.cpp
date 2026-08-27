#include <algorithm>
#include <bitset>
#include <cmath>
#include <iostream>
#include <mutex>
#include <thread>
#include <vector>

static constexpr int64_t LIMIT = 100000000;

void sieveSegment(int64_t start, int64_t end, const std::vector<int>& basePrimes, std::vector<int64_t>& output) {
    int64_t size = end - start;
    std::vector<bool> isPrime(size, true);

    for (int p : basePrimes) {
        int64_t first = std::max<int64_t>(p * p, ((start + p - 1) / p) * p);
        for (int64_t x = first; x < end; x += p) {
            isPrime[x - start] = false;
        }
    }

    for (int64_t i = 0; i < size; ++i) {
        if (isPrime[i] && start + i >= 2) {
            output.push_back(start + i);
        }
    }
}

int main() {
    int64_t root = static_cast<int64_t>(std::sqrt(LIMIT)) + 1;
    std::vector<bool> base(root + 1, true);
    std::vector<int> basePrimes;
    for (int64_t i = 2; i <= root; ++i) {
        if (base[i]) {
            basePrimes.push_back(static_cast<int>(i));
            for (int64_t j = i * i; j <= root; j += i) {
                base[j] = false;
            }
        }
    }

    int threads = std::thread::hardware_concurrency();
    if (threads == 0) threads = 4;

    std::vector<std::thread> workers;
    std::vector<std::vector<int64_t>> results(threads);
    std::mutex ioMutex;

    int64_t segmentSize = (LIMIT + threads - 1) / threads;
    for (int i = 0; i < threads; ++i) {
        int64_t start = i * segmentSize;
        int64_t end = std::min(start + segmentSize, LIMIT + 1);

        workers.emplace_back([start, end, &basePrimes, &results, i]() {
            sieveSegment(start, end, basePrimes, results[i]);
        });
    }

    for (auto& worker : workers) {
        worker.join();
    }

    int64_t totalPrimes = 0;
    for (const auto& segmentPrimes : results) {
        totalPrimes += static_cast<int64_t>(segmentPrimes.size());
    }

    std::cout << "Primes up to " << LIMIT << ": " << totalPrimes << "\n";
    return 0;
}
