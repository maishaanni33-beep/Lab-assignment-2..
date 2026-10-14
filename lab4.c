#include<stdio.h>
int main(){
int N, sum = 0;
printf("enter N");
scanf("%d" , &N);
for(int i = 1; i<= N; i++){
if( i%2 == 0){
sum = sum + i;
}
}
printf("sum = %d" , sum);
return 0;
}
