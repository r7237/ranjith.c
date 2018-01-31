#include<stdio.h>
void main()
{
int a,b;
printf("\n enter your age");
scanf("%d",&a);
printf("\n enter your income");
scanf("%d",&b);
if(a>60)
printf("\n no tax");
else if(b<=2500)
printf("\n tax is 0");
else if(b<=5000)
printf("\n tax is 0.1%");
else if(b<=10000)
printf("\n tax is 0.2%");
else
printf("\n tax is 0.3%");
return 0;
}
