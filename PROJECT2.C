#include<stdio.h>
#include<conio.h>
int main()
{
int pin=1234;
int epin;
float balance=5000;
float amount;
int choice;
printf("Enter the pin");
scanf("%d",&epin);
if(epin!=pin)
{
printf("invalid pin");
return 0;
}
else
{
printf("login success\n");
}
do
{
printf("\n 1.check balance \n");
printf("\n 2.withdraw \n");
printf("\n 3.deposite \n");
printf("\n 4.exit \n");
scanf("%d",&choice);
switch(choice)
{
case 1:
{
printf("total balance=%f",balance);
break;
}
case 2:
{
printf("enter withdraw amount:");
scanf("%f",&amount);
if(amount<=0)
{
printf("\n invalid amount");
}
else if(amount>balance)
{
printf("\n insufficient amount ");
}
else
{
balance=balance-amount;
printf("new balance:",balance);
}
}
case 3:
{
printf("\nEnter the deposite amount:");
scanf("%f",&amount);
if(amount>0)
{
balance+=amount;
printf("\nDeposit successful\n");
printf("total amount:%f",balance);
}
}
case 4:
{
printf("\nThank you\n");
break;
}
default:
{
printf("\nInvalid choice\n");
}
}
}while(choice!=4);
getch();
return 0;
}
