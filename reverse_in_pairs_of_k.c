#include<stdio.h>
struct node
{
    int data;
    struct node* next;
};
void insertAtBeg(struct node** head,int data)
{
    struct node* n=(struct node*)malloc(sizeof(struct node));
    n->data=data;
    n->next=*head;
    *head=n;
}
struct node* reverse(struct node* head,int k)
{
   struct node* prev=NULL;
   struct node* curr=head;
   struct node* next=NULL;
   int count=0;
   while(curr&&count<k)
   {
       next=curr->next;
       curr->next=prev;
       prev=curr;
       curr=next;
       count++;
   }
   if(next!=NULL)
   head->next=reverse(next,k);

   return prev;
}

void printList(struct node* head)
{
  while(head!=NULL)
  {
      printf("%d ",head->data);
      head=head->next;
  }
}
int main()
{
   struct node* head=NULL;
   insertAtBeg(&head,5);
   insertAtBeg(&head,4);
   insertAtBeg(&head,3);
   insertAtBeg(&head,2);
   insertAtBeg(&head,1);
   int k;
   scanf("%d",&k);
   struct node* h1=reverse(head,k);
   printList(h1);
   // int res=1;

}

