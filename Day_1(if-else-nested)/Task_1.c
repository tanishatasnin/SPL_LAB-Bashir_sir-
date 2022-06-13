#include <stdio.h>
int main()
{
               int u, t, a, s;
               printf("enter the values of u, a , and t \n ");
               scanf("%d%d%d", &u, &t, &a);

               s = ((u * t) + (.5 * a * t * t));
               printf("%d", s);
}
