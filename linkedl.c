#include<stdio.h> 
#include<stdlib.h>

struct node {
    int data;
    struct node *link;
};

typedef struct node NODE;
NODE *header = NULL, *newptr = NULL, *ptr, *ptr1;

void traverse();
void insertfront();
void insertend();
void insertany();
void deletefront();
void deleteend();
void deleteany();
void display();  

void main() {
    int no;
    char c;
    header = (NODE*)malloc(sizeof(NODE));  
    header->link = NULL;

    printf("\n  LINKED LIST OPERATIONS    \n");
    

    do {
        printf("-----------MENU--------------\n");
        printf("1.TRAVERSE \t2.INSERT AT FRONT \t3.INSERT AT END \t4.INSERT AT ANY POSITION \t5.DELETE FROM FRONT \t6.DELETE FROM END \t7.DELETE FROM ANY POSITION \t8.DISPLAY LIST \t9.EXIT\nEnter your choice: ");
        scanf("%d", &no);
        if (no == 9){
        printf("-----EXITED FROM CODE SUCCESSFULLY-----\n");
            break;
            }
        else {
            switch(no) {
                case 1: traverse(); break;
                case 2: insertfront(); break;
                case 3: insertend(); break;
                case 4: insertany(); break;
                case 5: deletefront(); break;
                case 6: deleteend(); break;
                case 7: deleteany(); break;
                case 8: display(); break;  
                default: printf("\t\tINVALID ENTRY\n"); break;
            }

            printf("\t\tDo you want to continue (y/n): ");
            scanf(" %c", &c);
        }
    } while(c == 'y' || c == 'Y');
}

void insertfront() {
    newptr = (NODE*)malloc(sizeof(NODE));
    if (newptr == NULL) {
        printf("-----Insufficient memory-----\n");
        return;
    }
    printf("\t\tEnter the element: ");
    scanf("%d", &newptr->data);
    newptr->link = NULL;

    newptr->link = header->link;  
    header->link = newptr;  
}

void insertend() {
    newptr = (NODE*)malloc(sizeof(NODE));
    if (newptr == NULL) {
        printf("-----Insufficient memory-----\n");
        return;
    }
    printf("\t\tEnter the element: ");
    scanf("%d", &newptr->data);
    newptr->link = NULL;

    ptr = header;
    while (ptr->link != NULL) {
        ptr = ptr->link;
    }
    ptr->link = newptr;  
}

void insertany() {
    int key;
    newptr = (NODE*)malloc(sizeof(NODE));
    if (newptr == NULL) {
        printf("-----Insufficient memory-----\n");
        return;
    }
    printf("\t\tEnter the key after which to insert: ");
    scanf("%d", &key);
    printf("\t\tEnter the element: ");
    scanf("%d", &newptr->data);

    ptr = header->link;
    while (ptr != NULL && ptr->data != key) {
        ptr = ptr->link;
    }

    if (ptr == NULL)
        printf("\t\tKey not found\n");
    else {
        newptr->link = ptr->link;  
        ptr->link = newptr;
    }
}

void deletefront() {
    if (header->link == NULL) {
        printf("----Empty list\n");
        return;
    }

    ptr = header->link;
    header->link = ptr->link;   
    printf("\t\tDeleted element is %d\n", ptr->data);
    free(ptr); 
}

void deleteend() {
    if (header->link == NULL) {
        printf("\t\tEmpty list\n");
        return;
    }

   ptr = header;
    ptr1 = header->link;
    if (ptr1->link == NULL) {  
        header->link = NULL;
        printf("\t\tDeleted element is %d\n", ptr1->data);
        free(ptr1);
        return;
    }

    while (ptr1->link != NULL) {
        ptr = ptr1;
        ptr1 = ptr1->link;
    }
    ptr->link = NULL;  
    printf("\t\tDeleted element is %d\n", ptr1->data);
    free(ptr1);
}

void deleteany() {
    int key;
    if (header->link == NULL) {
        printf("\t\tEmpty list\n");
        return;
    }

    printf("\t\tEnter the key to delete: ");
    scanf("%d", &key);

    ptr = header;
    ptr1 = header->link;

    while (ptr1 != NULL && ptr1->data != key) {
        ptr = ptr1;
        ptr1 = ptr1->link;
    }

    if (ptr1 == NULL)
        printf("\t\tKey not found\n");
    else {
        ptr->link = ptr1->link;  
        printf("\t\tDeleted element is %d\n", ptr1->data);
        free(ptr1);
    }
}

void traverse() {
    if (header->link == NULL) {
        printf("\t\tList is empty\n");
        return;
    }

    printf("\t\tElements are:\n\t\t");
    ptr = header->link;
    while (ptr != NULL) {
        printf("%d ", ptr->data);
        ptr = ptr->link;
    }
    printf("\n");
}

void display() {   
    if (header->link == NULL) {
        printf("\t\tList is empty\n");
        return;
    }

    printf("\t\tDisplaying the linked list:\n\t\t");
    ptr = header->link;
    while (ptr != NULL) {
        printf("%d ", ptr->data);
        ptr = ptr->link;
    }
    printf("\n");
}
