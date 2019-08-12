#include<stdio.h>
struct Node
{
    int data;
    struct Node* next;
};
void push(struct Node** head_ref, int new_data)
{
    /* allocate node */
    struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));

    /* put in the data  */
    new_node->data  = new_data;

    /* link the old list off the new node */
    new_node->next = (*head_ref);

    /* move the head to point to the new node (head is changed as we are adding the node in the beggining)*/
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
    push(&head, 1);
    push(&head, 3);
    push(&head, 3);
    push(&head, 8);
    push(&head, 8);
    //struct Node* curr = (struct Node*) malloc(sizeof(struct Node));
    struct Node* curr = head;
    while(curr&&curr->next)
    {
        if(curr->data == curr->next->data)
        {
        curr->next=curr->next->next;
        }
        else
        curr=curr->next;
    }
    printList(head);


}
