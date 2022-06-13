#include <stdio.h>
int main()
{
               int i, rev = 0, rem;
               printf("Enter the number : ");
               scanf("%d", &i);
               while (i != 0)
               {

                              rem = i % 10;
                              rev = rev * 10 + rem;
                              i /= 10;
               }

               printf("Reverd number is : %d", rev);
               return 0;
}
