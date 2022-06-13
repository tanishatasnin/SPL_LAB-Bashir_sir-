#include<stdio.h>
int main (){
int i ,n;
scanf("%d",&n);
// if we decleared int int in the under of for() it will be declared only the for loop function . so we should declared in the start like this.
for(i=1; i<=n ; i++){
printf("%d", i);

}
return 0;
}
