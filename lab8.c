#include<stdio.h>
int main (){
int n, dig , sum = 0;
printf("enter");
scanf("%d" , &n);
if(n < 0){
n = -n;
}
while(n > 0){
dig = n % 10;
sum = sum + dig;
n /= 10;
}
printf("%d" , sum);
return 0;
}
