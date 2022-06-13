#include <stdio.h>
int main()
{

               int i, j, k, sum; // integer values
               double d;         // float, double number values

               scanf("%d %d %d", &i, &j, &k); // input the values
               scanf("%lf", &d);              // %f will be have 6 digits after the dot
               sum = i + j + k;
               printf("%d\n", sum);
               printf("%.2lf", d);
               return 0;
}
