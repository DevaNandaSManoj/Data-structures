#include<stdio.h>
int front=-1,rear=-1,i,n,item;
int a[20];
void enqueue();
void dequeue();
void display();
void main(){
    int opt;
    printf("enter the size of the queue");
    scanf("%d",&n);
    do{
        printf("\nenter your choice\n");
        printf("1:Enqueue\n");
        printf("2:Dequeue\n");
        printf("3:Display\n");
        printf("4:Exit\n");
        printf("Choice");
        scanf("%d",&opt);
        switch(opt){
            case 1: enqueue();
            break;
            case 2:dequeue();
            break;
            case 3:display();
            break;
            case 4: printf("''''exiting'''''");
             printf("''''THANK YOU'''''\n");
             break;
             default:printf("enter a valid option");
        }
    } while(opt!=4);
}
void enqueue(){
    if(front==(rear+1)%n){
        printf("queue overflow");
    }else{
        printf("enter the element to be added\n ");
        scanf("%d",&item);
        rear=(rear+1)%n;
        a[rear]=item;
        if(front==-1){
            front=0;
        }
        
    }
 }
void dequeue(){
    if(rear==-1||front==-1){
        printf("queue underflow");
    }else if(front==rear){
        item=a[front];
        front=-1;
        rear=-1;
        printf("the deleted element is%d\n ",item);
        }
        else {
            item=a[front];
            front=(front+1)%n;
            printf("the deleted element is%d\n ",item);
        }}
        void display(){
            if(rear==-1||front==-1){
                printf("the queue is empty");
            } else{
                   printf("the queue is\n...");
                   for(i=front;i<=rear;i++){
                    printf("%d",a[i]);
                    printf("\t");
                   }
                   printf("\n");
            }
        }
            
        

    

