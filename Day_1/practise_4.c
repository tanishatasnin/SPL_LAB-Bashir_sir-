#include <stdio.h>
int main()
{
               // write a c program of  if,if-else,else
               int x;
               scanf("%d", &x);
               // interval 1: 0<= x <=5
               // interval 2: 5< x <=8
               // interval 3: 8< x <11
               // interval 4: 11<= x <15

               if (x >= 0 && x <= 5)
               {
                              printf("Interval 1\n");
               }
               else if (x > 5 && x <= 8)
               {
                              printf("Interval 2\n");
               }
               else if (x > 8 && x < 11)
               {
                              printf("Interval 3\n");
               }
               else if (x >= 11 && x < 15)
               {
                              printf("Interval 4");
               }
               else
               {
                              printf("Not any Interval");
               }
               return 0;
}
