#include <stdio.h>
int main()
{
               int i, rev = 0, rem, num;
               printf("Enter the number : ");
               scanf("%d", &i);
               num = i;
               while (i != 0)
               {

                              rem = i % 10;
                              rev = rev * 10 + rem;
                              i /= 10;
               }
               printf("Rev number is : %d\n", rev);

               if (num == rev)
               {

                              printf(" the number is a palindrome number");
               }
               else
               {
                              printf("the number is not a palindrome number");
               }

               return 0;
}
