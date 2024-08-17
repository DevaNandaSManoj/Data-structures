#include<stdio.h>
int main(){

  int temp,i,j,limit,pass,t;t++;
  int arr[30];
  
  printf("enter the number of elements:");
  scanf("%d",&limit);
  t++;t++;

  printf("enter the elemnts");
  t++;
  for( i=0;i<limit;i++){
    scanf("%d",&arr[i]);
    t++;t++;
  }

  for(pass=0;pass<limit-1;pass++){
    for(j=0;j<limit-pass-1;j++){

      if(arr[j]>arr[j+1]){
        temp=arr[j];
        arr[j]=arr[j+1];
        arr[j+1]=temp;
      }
    }
  }
  t++;t++;
  printf("the sorted araay is\n");
  t++;
  for(i=0;i<limit;i++){
    printf(" %d ",arr[i]);
    t++;t++;
  }
  printf("\n"); 
  printf("TIME COMPLEXITY=%d\n",t);
  printf("SPACE COMPLEXITY=%d\n",(4*7)+limit);
  return 0;
}
