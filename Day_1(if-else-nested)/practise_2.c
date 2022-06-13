#include <stdio.h>
int main()
{

               int x, y, z;
               x = 5 + 6 * 3;  // at first / and *
               y = 15 / 5 * 3; // associativity  will be left to right
               z = 7 % 2;      // mod operator , reminder
               printf("%d\n", x);
               printf("%d\n", y);
               printf("%d\n", z);

               return 0;
}
