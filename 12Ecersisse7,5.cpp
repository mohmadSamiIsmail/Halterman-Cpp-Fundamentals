/*12. Would the following multi-way if/else be a good candidate to rewrite as a switch statement?
If so, rewrite the code using a switch; otherwise, explain why it is impractical to do so.
©2019 Richard L. Halterman
Draft date: July 11, 2019
7.5. EXERCISES
177
int x, y;
std::cin >> x >> y;
if (x < 10)
y = 10;
else if (x == 5)
y = 5;
else if (x == y)
y = 0;
else if (y > 10)
x = 10;
else
x = y;*/
