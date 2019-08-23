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
     int n,k,p=0,val,sum=0;
     int i;
     char* a=(char *)malloc(sizeof(char));
        scanf("%s",a);
        fflush(stdin);
    stack* top=NULL;
    if(a[0]=='H')
    {
        val=1;
        push(&top,1);
    }
     else if(a[0]=='C')
    {
        val=12;
        push(&top,12);
    }
    else if(a[0]=='O')
    {
        val=16;
        push(&top,16);
    }
    else if(a[0]=='(')
    {
        push(&top,-1);
    }

    for(i=1;i<strlen(a);i++)
    {

      if(a[i]=='H')
    {

        val=1;
        push(&top,1);
    }
     else if(a[i]=='C')
    {
        val=12;
        push(&top,12);
    }
    else if(a[i]=='O')
    {
        val=16;
        push(&top,16);
    }
    else if(a[i]>=48&&a[i]<=57)
    {
        val=pop(&top);
        sum=(a[i]-48)*val;
        push(&top,sum);
    }
    else if(a[i]=='(')
                push(&top,-1);
    else if(a[i]==')')
    {
        while(peek(top)!=-1)
        {
            sum+=pop(&top);
        }
        pop(&top);
        push(&top,sum);

    }

    }
    int total=0;
    while(!isEmpty(top))
    {
       total+=pop(&top);
    }
    printf("%d",total);

 }
