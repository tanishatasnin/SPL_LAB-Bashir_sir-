#include <stdio.h>
int main()
{
               int i, n;
               double input, sum = 0, average;
               scanf("%d", &n);

               for (i = 1; i <= n; i++)
               {
                              scanf("%lf", &input);
                              sum += input;
               }
               average = sum / n;
               printf("%2lf", i);
               return 0;
}
