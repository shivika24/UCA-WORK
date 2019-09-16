#include<stdio.h>
struct Node
{
    int data;
    struct Node* next;
};
void push(struct Node** head_ref, int new_data)
{
    struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));
    new_node->data  = new_data;
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}
void printList(struct Node* n)
{
       while (n != NULL) {
        printf(" %d ", n->data);
        n = n->next;
    }
}
int main()
{
    struct Node* head = NULL;

    /* Use push() to construct below list
    1->2->1->3->1 */
    push(&head, 1);
    push(&head, 3);
    push(&head, 2);
    push(&head, 1);
    push(&head, 1);
    int x=1;
    struct Node* dummy = (struct Node*) malloc(sizeof(struct Node));
    dummy->next=head;
    struct Node* curr=dummy;
    while(curr&&curr->next)
    {
        if(curr->next->data>x)
            curr->next=curr->next->next;
        else
            curr=curr->next;
    }
   /* struct Node* current=head;
    struct Node* prev=head;
     while(current != NULL)
    {
        if(current->data>x)
        {
            if(current==head)
            {
                head=head->next;
                current=head;
                prev=head;
            }
            else
            {
                prev->next=current->next;
                current=current->next;
            }

        }
        else
        {
            prev=current;
            current=current->next;
        }
    }*/
    printList(head);
}
