#include<stdio.h>
int main (){
int n, cnt = 0;
printf("Enter");
scanf("%d", &n);
while(n>0){
n/=10;
cnt++;
}
printf("%d" , cnt);
return 0;
}
