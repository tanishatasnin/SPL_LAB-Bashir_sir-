#include <stdio.h>
void main()
{
               int marks;
               printf("Enter your marks ");
               scanf("%d", &marks);
               if (marks < 0 || marks > 100)
               {
                              printf("Wrong Entry");
               }
               else if (marks < 55)
               {
                              printf("Grade F");
               }
               else if (marks >= 55 && marks < 58)
               {
                              printf("Grade D-");
               }
               else if (marks >= 58 && marks < 63)
               {
                              printf("Grade D+");
               }
               else if (marks >= 63 && marks < 68)
               {
                              printf("Grade C-");
               }
               else if (marks >= 68 && marks < 73)
               {
                              printf("Grade C");
               }
               else if (marks >= 73 && marks < 78)
               {
                              printf("Grade C+");
               }
               else if (marks >= 78 && marks < 83)
               {
                              printf("Grade B-");
               }
               else if (marks >= 83 && marks < 87)
               {
                              printf("Grade B+");
               }
               else if (marks >= 87 && marks < 90)
               {
                              printf("Grade A-");
               }
               else if (marks >= 90 && marks < 100)
               {
                              printf("Grade A");
               }
               else
               {
                              printf("Grade A+");
               }
}
