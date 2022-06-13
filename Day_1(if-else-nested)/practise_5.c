#include <stdio.h>
int main()
{
               // write a c program of ever or odd
               int x;
               scanf("%d", &x);
               // input a num
               // find out it even or odd
               // if even ..find out num is between 5 and 15
               // if odd.. fnd out the num is negative or larger then 100

               if (x % 2 == 0)
               {
                              printf("the number is even");
                              if (x >= 5 && x <= 15)
                              {
                                             printf("In the Interval\n");
                              }
               }

               else
               {
                              printf("the number is odd");
                              if (x < 0 || x > 100)
                              {
                                             printf("Condition is true");
                              }
               }
               return 0;
}
