#include<stdio.h>
viod main()
{
int a,b,c;
printf("enter the numbers");
scanf("%d%d%d",&a,&b,&c);
if((a>b)&&(a>c))
printf("a is largest");
else if((b>c)&&(b>a))
printf("b is largest");
else
printf("c is largest");
}
