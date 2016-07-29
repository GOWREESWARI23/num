#include<stdio.h>
#include<conio.h>
void main()
{
int n,c,value,sum=0;
printf("enter n numbers to be added");
scanf("%d",&n);
printf("enter %d number ",n);
for(c=0;c<=n;c++)
{
scanf("%d",&value);
sum=sum+value;
}
printf("the no is:%d",sum);
}
