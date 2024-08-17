#include <stdio.h>
void main()
{
int n,i,count=0,x,time=0;
time=time+2;
printf("enter the no of elements");
time++;
scanf("%d",&n);
time++;
int a[n];
printf("enter the array elements");
time++;
for(i=0;i<n;i++)
{
time++;
scanf("%d",&a[i]);
time++;
}
time++;
printf("enter the no to be searched");
time++;
scanf("%d",&x);
time++;
time++;
for(i=0;i<n;i++)
{time++;
time++;
if(a[i]==x)
{
count++;
time++;
printf("\nThe element is found at %d position",i+1);
time++;
}
}
time++;
if(count>0)
{
printf("\nelement found %d times",count);
time++;
}
else{
printf("\nThe element not found");
time++;}
printf("\nspace complexity %d",(5*4)+(n*4));
time++;
printf("\ntime complexity %d",time++);
}
