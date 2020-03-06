#include<stdio.h>
void lcm(int a,int b);
int main()
{
int n1,n2;
printf("Enter the two numbers:");
scanf("%d %d",&n1,&n2);

lcm(n1,n2);

return 0;
}

void lcm(int n1,int n2)
{
int check1=n1;
int check2=n2;
while(check1!=check2)
{
if(check1<check2)
{
check1 = check1+n1;
}
else
{
check2 = check2+n2;
}
}
printf("The lcm of %d and %d is %d.",n1,n2,check1);
}  