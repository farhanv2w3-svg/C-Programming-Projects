#include<stdio.h>
int main()
{
char operator;
double num1,num2,result;
printf("Enter an operator(+,-,*,/)");
scanf("%c",&operator);
printf("Enter a number:");
scanf("%lf",&num1);
printf("enter a number:");
scanf("%lf",&num2);
switch(operator)
{
case '+':
 result=num1+num2;
 printf("%.2lf+.2lf = %.2lf\n",num1,num2,result);
 break;
case '-':
 result=num1-num2;
 printf("%.2lf - %.2lf = %.2lf\n",num1,num2,result);
 break;
case '*':
 result=num1*num2;
 printf("%.2lf * %.2lf = %.2lf\n", num1,num2,result);
 break;
case '/':
 result=num1/num2;
 printf("%.2lf / %.2lf = %.2lf\n", num1,num2,result);
 break;
}
return 0;
}