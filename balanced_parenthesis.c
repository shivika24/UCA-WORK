#include<stdio.h>
typedef struct stack
{
    int data;
    struct stack* next;
}stack;
void push(stack **head,int data)
{
    stack* newNode=(stack *)malloc(sizeof(stack));
    if(newNode==NULL)
    {
        printf("stack is full");
    }
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
        (*head)=NULL;
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
int isEmpty(stack *head)
{
    if(head==NULL)
        return 1;
    else
        return 0;
}
/*char** braces(int n, char** arr, int* result)
{
    char ** res = (char**)malloc(n*sizeof(char*));
    int i=0,j=0,k=0;
    for(i=0;i<n;i++)
    {
        node *head= NULL;
        for(j=0;arr[i][j]!='\0';j++)
        {
            if(arr[i][j]=='(' || arr[i][j]=='[' || arr[i][j]=='{')
            {
                push(&head,arr[i][j]);
            }
            else
            {
                if(arr[i][j]=='}' && top(head)=='{')
                pop(&head);
                else{
                         if(arr[i][j]==')' && top(head)=='(')
                         pop(&head);
                    else
                    {
                          if(arr[i][j]==']' && top(head)=='[')
                          pop(&head);
                          else
                          push(&head,'x');
                    }
                }
            }
        }
        if(empty(head)==0)
        {
            res[k++]="NO";
        }
        else
        {
            res[k++]="YES";
        }
    }
    *result=n;
    return res;
}*/
int main()
{
    stack* top=NULL;
    char *a=(char*)malloc(sizeof(char));
    scanf("%s",a);
    fflush(stdin);
    int i;
    for(i=0;i<strlen(a);i++)
    {
        if(a[i]=='('||a[i]=='{'||a[i]=='[')
            push(&top,a[i]);
            else
            {
                if(isEmpty(top))
                {
                    printf("NO");
                    break;
                }
                        else if(a[i]==')'&&peek(top)=='('||a[i]=='}'&&peek(top)=='{'||a[i]==']'&&peek(top)=='[')
                        pop(&top);
                    else
                    {
                     printf("NO");
                     break;
                    }
            }
    }
    if(isEmpty(top))
        printf("YES");
    else
        printf("NO");
}
