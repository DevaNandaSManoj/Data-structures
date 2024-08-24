#include<stdio.h>
struct polynomial
{
int coeff;
int expo;
};
void main()
{
 struct polynomial x[100];
 int n,i;
 printf("Enter the no of terms");
 scanf("%d",&n);
 printf("Enter the coefficient term & exponent in descending order\n");
 for(i=0;i<n;i++)
 {
  printf("coefficient: ");
  scanf("%d",&x[i].coeff);
  printf(" exponent: ");
  scanf("%d",&x[i].expo);
 } 
 printf("The polynomial is: ");
 for(i=0;i<n;i++)
 {
  printf("%dx^%d",x[i].coeff,x[i].expo);
  if(i<n-1)
   printf("+");
 }
  printf("\n");
}
