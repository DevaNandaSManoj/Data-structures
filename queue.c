#include <stdio.h>
int enqueue(int queue[], int rear, int n) 
{
    if (rear >= n - 1)
     {
        printf("Queue overflow\n");
    } 
    else
     {
        int item;
        rear++;
        printf("Enter the item to be inserted: ");
        scanf("%d", &item);
        queue[rear] = item;
    }
    return rear;
}

int dequeue(int queue[], int front, int rear)
 {
    if (front > rear) 
    {
        printf("Queue underflow\n");
    } else 
    {
        int item = queue[front];
        printf("Deleted element is %d\n", item);
        front++;
    }
    return front;
}

void display(int queue[], int front, int rear) 
{
    printf("\nThe elements in the queue are: ");
    if (front > rear)
     {
        printf("Queue is empty\n");
    } else 
    {
        for (int i = front; i <= rear; i++) 
        {
            printf(" %d", queue[i]);
        }
        printf("\n");
    }
}

void main() 
{
    int n, option;
    int queue[50];
    int front = 0, rear = -1;
    char ch = 'y';

    printf("Enter the size of the queue: ");
    scanf("%d", &n);

    do {
        printf("\n*****QUEUE OPERATIONS*******\n");
        printf("\n1.Enqueue");
        printf("\n2.Dequeue");
        printf("\n3.Display");
        printf("\nEnter your choice: ");
        scanf("%d", &option);

        switch (option) {
            case 1:
                rear = enqueue(queue, rear, n);
                break;
            case 2:
                front = dequeue(queue, front, rear);
                break;
            case 3:
                display(queue, front, rear);
                break;
            default:
                printf("\nInvalid option\n");
        }

        printf("\nDo you want to continue(Y/N)? ");
        getchar();
        scanf("%c", &ch);

    } while (ch == 'y' || ch == 'Y');

    printf("\nExiting...\n");
}

