#include<stdio.h>
#define pa printf("************************\n");
void main(){
int num1, num2 ,sum;
pa
printf("Program Sum Number\n");
pa





do{
printf( "Input number1: ");
scanf("%d", &num1);
printf( "Input number2: ");
scanf("%d", &num2);

sum = num1 + num2;

printf("Sum of number: %d\n", sum);
}while(sum<= 500 );








}