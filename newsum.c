#include<stdio.h>
int main()
{
int numb;
printf("Enter the Number:");
scanf("%d", &numb);
if (numb % 2 == 0)
{
printf("The Number is Even:\n");
}
else
{
printf("The Number is Odd:\n");
}
return 0;
}