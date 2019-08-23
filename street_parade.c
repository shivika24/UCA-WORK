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
     int n,k,p=0;
     scanf("%d",&n);
     while(n!=0)
     {
     int i,res[n],a[n];
     for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    stack* top=NULL;
    push(&top,a[0]);
    for(i=1;i<n;i++)
    {
        if(a[i]<peek(top)||isEmpty(top))
            push(&top,a[i]);
        else
        {
            while(a[i]>peek(top)&&!isEmpty(top))
            {
               // printf("***");
                res[p]=pop(&top);
                p++;
            }
            push(&top,a[i]);
        }
    }
    while(!isEmpty(top))
    {
        //printf("***");
        res[p]=pop(&top);
        p++;
    }
    int y;
    for(i=0;i<p-1;i++)
    {
        //printf("%d ",res[i]);
        if(res[i]<=res[i+1])
            y=1;
        else
        {
            y=0;
            break;
        }
    }
    if(y==1)
        printf("yes");
    else
        printf("no");
        scanf("%d",&n);
     }

 }
