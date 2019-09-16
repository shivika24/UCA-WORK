
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
int largestRectangleArea(int* A, int n1) {
    if(n1==1)
    return A[0];
    int i,max,max1=A[0];
    stack* top=NULL;
    push(&top,0);
    for(i=1;i<n1;i++)
    {
     if(A[peek(top)]<=A[i])
     {
      push(&top,i);
     }
     else
     {
    while(!isEmpty(top)&&A[peek(top)]>A[i])
     {
         max=A[pop(&top)];
         if(isEmpty(top))
         {
             max=max*i;
         }
         else
         {
           max=max*(i-peek(top)-1);
         }
         if(A[peek(top)]<A[i]||isEmpty(top))
         push(&top,i);
         if(max1<=max)
         max1=max;
     }
         push(&top,i);
     }

    }
    while(!isEmpty(top))
    {
         max=A[pop(&top)];
         if(isEmpty(top))
         {
             max=max*i;
         }
         else
         {
           max=max*(i-peek(top)-1);
         }
            if(max1<max)
            max1=max;
    }
    return max1;
}
