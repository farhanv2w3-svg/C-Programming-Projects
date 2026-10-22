#include<stdio.h>
int main()
{
int choice;
float balance,amount;
do
{
printf("\n===ATM VENUE=======\n");
printf("1.balance amoun\n");
printf("2.deposit money\n");
printf("3.Withdraw money\n");
printf("4.exit\n");
printf("Enter your choice:");
scanf("%d",&choice);
switch(choice)
{
case 1:
printf("Balance= rs.%.2f\n",balance);
break;
case 2:
printf("Enter deposit amount:");
scanf("%f",&amount);
if(amount>0)
{
balance+=amount;
printf("Deposit successful!\n");
}
else
{
printf("Invalid number\n");
}
break;
case 3:
printf("Enter withdrawal amount:\n");
scanf("%f",&amount);
if(amount>0 && amount<=balance)
{
balance-=amount;
printf("Withdrawal successfully\n");
}
else
{
printf("Insufficient balance\n");
}
break;
case 4:
printf("Thank you for using ATM\n");
break;
default:
 printf("invalid choice\n");
}
}while(choice!=4);
return 0;
}