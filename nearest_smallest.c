#include<stdio.h>
typedef struct stack
 {
     int data;
     struct stack* next;
 }stack;
 void push(stack** head,int data)
 {
     stack* newNode=(stack*)malloc(sizeof(stack));

     if(newNode==NULL)
     printf("stack is full");
     else
     {
    newNode->data=data;
     newNode->next=(*head);
      *head=newNode;
       }
 }
 int pop(stack **head)
 {
     stack* temp=(*head);
     if(temp->next!=NULL)
     (*head)=temp->next;
     else
     *head=NULL;
     int t=temp->data;
     free(temp);
     temp=NULL;
     return t;
 }
 int peek(stack *head)
 {
     if(head==NULL)
     return;
     else
     return head->data;
 }
 int isEmpty(stack* head)
 {
     if(head==NULL)
     return 1;
     else
     return 0;
 }
 int main()
 {
     int n,k=0;
     scanf("%d",&n);
     int i,res[n],a[n];
     for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    stack* top=NULL;
    push(&top,0);
    res[k]=-1;
    k++;
    for(i=1;i<n;i++)
    {
          if(a[i]>a[peek(top)]||isEmpty(top))
           {
               res[k]=a[peek(top)];
               k++;
                push(&top,i);
           }
           else
            {
              while(a[i]<=a[peek(top)]&&!isEmpty(top))
                    {
                       pop(&top);
                    }
                    if(isEmpty(top))
                    {
                        res[k]=-1;
                        k++;
                    }
                    else
                    {
                    res[k]=a[peek(top)];
                    k++;
                    }
                    push(&top,i);
            }

    }
    for(i=0;i<k;i++)
        printf("%d ",res[i]);

 }
