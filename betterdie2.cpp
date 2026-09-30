#include <iostream>
#include <ctime>
#include <cstdlib>

/*
 *  initialize_die(),
 *Changes the seed every 
 * single 
 * program's excution
 * no parameters is needed 
 * returns nothing
 */
void initialize_die() {
    srand(static_cast<unsigned>(time(0))); 
}
/*
 * roll()
 * no parameters is needed 
 * returns random value every time 
 */
int roll() {
    return (rand() % 6 + 1);
}
/*
 * show_die (int),
 * Displays corresponding die's form depends on spots's value
 * Spots, is a parameters used to recive random value
 * from roll's function to use it indetermine the correspond die form
 * Returns nothing
 */
void show_die (int spots) {
    std::cout << "+-------+\n";
    switch (spots) {
        case 1:
            std::cout << "|       |\n";
            std::cout << "|   *   |\n";
            std::cout << "|       |\n";
            break;
        case 2:
            std::cout << "| *     |\n";
            std::cout << "|       |\n";
            std::cout << "|     * |\n";
            break;
        case 3:
            std::cout << "| *     |\n";
            std::cout << "|   *   |\n";
            std::cout << "|     * |\n";
            break;
        case 4:
            std::cout << "| *   * |\n";
            std::cout << "|       |\n";
            std::cout << "| *   * |\n";
            break;
        case 5:
            std::cout << "| *   * |\n";
            std::cout << "|   *   |\n";
            std::cout << "| *   * |\n";
            break;
        case 6:
            std::cout << "| *   * |\n";
            std::cout << "| *   * |\n";
            std::cout << "| *   * |\n";
            break;
        default:
            std::cout << "*** Error: illegal die value ***\n";
            break;
    }
    std::cout << "+-------+\n";
}
int main () {
    initialize_die(); // Changes seed 
    for (int i = 0 ; i < 3 ; i++) { // rolls die three times 
        show_die(roll());
    }

}