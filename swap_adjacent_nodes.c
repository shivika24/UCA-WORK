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
struct node* swap(struct node* head)
{
    struct node* first=head;
    struct node* second=head;
    if(first)
        second=first->next;
    if(first==NULL||second==NULL)
        return first;
    else
    {
        second->next=swap(second->next);
        first->next=second->next;
        second->next=first;
        return second;
    }
};
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
   k=swap(head);
   printList(k);
}
