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
struct node* reverse(struct node* head)
{
   struct node* prev=NULL;
   struct node* curr=head;
   struct node* next=NULL;
 /*  if(curr)
        next=curr->next;*/
   while(curr)
   {
       next=curr->next;
       curr->next=prev;
       prev=curr;
       curr=next;
   }
   return prev;
}
void printList(struct node* head)
{
  while(head!=NULL)
  {
      printf("%d\n",head->data);
      head=head->next;
  }
}
int main()
{
   struct node* head=NULL;
   struct node* k=NULL;
   insertAtBeg(&head,8);
   insertAtBeg(&head,5);
   insertAtBeg(&head,4);
   insertAtBeg(&head,9);
   k=reverse(head);
   printList(k);
}
