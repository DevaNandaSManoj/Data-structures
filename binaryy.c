#include<stdio.h>
void main()
{
int i,n,search,l,r,mid,c=0,a[100];
c=c+1;
printf("Enter the no. of elements");
c++;
scanf("%d",&n);
c++;
printf("enter elements in order");
 c++;
 c++;
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
 c++;
 c++;
}
printf("Enter the number to be searched");
c++;
scanf("%d",&search);
c++;
l=0;
c++;
r=n-1;
c++;
c++;
while(l<=r)
{
 c++;
 mid=(l+r)/2;
 c++;
 if (a[mid]<search)
 {
  l=mid+1;
  c++;
 }
else if(a[mid]==search)

 {
  c++;
printf("The number is found at %d", mid);
  break;
 }
else if(a[mid]>search)
 {
  r=mid-1;
c++;
 }
}
c++;
while(l>r)
{
c++;
printf("The no is not found");
c++;
}
printf("\nThe space complexity is %d",(5*4)+(n*4));
 c++;
 printf("\nThe time complexity is %d",c++);
 }
