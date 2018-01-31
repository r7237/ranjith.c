
#include<stdio.h>
int main()
{
int i=1,a;
    printf("enter the value of your fav table");
    scanf("%d",&a);
    while(i<=25)
    {
     printf("\n%d*%d=%d",i,a,i*a);
     i++;
    }
    return 0;
}
