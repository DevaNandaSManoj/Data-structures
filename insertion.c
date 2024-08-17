#include <stdio.h>
void main()
{
int i,j,n,temp,a[100],t=0,space=0;
space=6*4;
t+=2;
printf("enter the no of elements");
t++;
scanf("%d",&n);
t++;
printf("enter the numbers");
t++;
for(i=0;i<n;i++)
{
t++;
scanf("%d",&a[i]);
space+=4;
}
t=t+1;
 for(i=1;i<n;i++)
 {
 t++;
 temp=a[i];
 j=i-1;
 t++;
 while(j>=0&&a[j]>temp)
 {
 t++;
 a[j+1]=a[j];
 t++;
 j--;
 }
 a[j+1]=temp;
 t++;
 }
 t=t+1;
 printf("Sorted list\n");
 t++;
 for(i=0;i<n;i++)
 {
 t++;
 printf("%d\t",a[i]);
 }
 t=t+1;
 printf("\nspace complexity %d",space);
t++;
printf("\ntime complexity %d",t++);
 }
 
