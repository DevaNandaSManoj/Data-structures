#include <stdio.h>
#include <stdlib.h>
struct Node
{
 int coeff;
 int exp;
 struct Node* link;
};
struct Node* createNode(int coeff, int exp)
 {
  struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
  newNode->coeff = coeff;
  newNode->exp = exp;
  newNode->link = NULL;
  return newNode;
 }
 void insertNode(struct Node** poly,int coeff,int exp)
 {
  struct Node* newNode = createNode(coeff, exp);
  if(*poly == NULL)
  {
   *poly = newNode;
  }
 else
 {
 struct Node* temp = *poly;
 while(temp->link != NULL)
 {
  temp = temp->link;
 }
 temp->link = newNode;
 }
 }
 void display(struct Node* poly)
 {
  while(poly != NULL)
  {
  printf("%dx%d", poly->coeff, poly->exp);
  if (poly->link != NULL && poly->link->coeff)
  {
  printf(" + ");
  }
  poly = poly->link;
  }
  printf("\n");
 }
 struct Node* polynomialAddition( struct Node* p1, struct Node* p2)
 {
 struct Node* result = NULL;
 while (p1 != NULL && p2 != NULL)
  if(p1->exp > p2->exp)
  {
  insertNode(&result, p1->coeff , p1->exp);
  p1= p1->link;
  }
  else if(p1->exp < p2->exp)
  {
  insertNode(&result, p2->coeff , p2->exp);
  p2 = p2->link;
  }
  else
  {
  int sum = p1->coeff + p2->coeff;
  if(sum!=0)
  {
  insertNode(&result, sum , p1->exp);
  }
  p1=p1->link;
  p2=p2->link;
  }
 while(p1!= NULL)
 {
 insertNode(&result, p1->coeff, p1->exp);
  p1 = p1->link;
 }
 while(p2!= NULL)
 {
 insertNode(&result, p2->coeff, p2->exp);
  p2 = p2->link;
 }
 return result;
 }
 void main()
 {
  struct Node* p1 = NULL;
  struct Node* p2 = NULL;
  struct Node* sumPoly = NULL;
  int n, coeff, exp;
  printf("Number of terms in the first polynomial: ");
  scanf("%d", &n);
  printf("Enter the terms in the order (first coefficient , then exponent):\n");
 for (int i = 0; i < n; i++)
 {
  scanf("%d %d", &coeff, &exp);
  insertNode(&p1, coeff, exp);
 }
 printf("Number of terms in the second polynomial:");
 scanf("%d", &n);
 printf("Enter the terms in the order (first coefficient,then exponent):\n");
for (int i = 0; i < n; i++)
 {
  scanf("%d %d", &coeff, &exp);
  insertNode(&p2, coeff, exp);
 }
  printf("\nFirst Polynomial: ");
  display(p1);
  printf("Second Polynomial: ");
  display(p2);
  sumPoly = polynomialAddition(p1, p2);
  printf("\nSum of the two polynomials: ");
  display(sumPoly);
  }
