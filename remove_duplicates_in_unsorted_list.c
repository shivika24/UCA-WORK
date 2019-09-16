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
    push(&head, 2);
    push(&head, 3);
    push(&head, 2);
    push(&head, 1);
    push(&head, 1);

    struct Node* ptr=head;
    struct Node* dup=NULL;
    struct Node* ptr1=NULL;
    while(ptr&&ptr->next)
    {
        ptr1=ptr;
        while(ptr1->next)
        {
            if(ptr->data==ptr1->next->data)
            {
               ptr1->next=ptr1->next->next;
            }
            else
                ptr1=ptr1->next;
        }
        ptr=ptr->next;
    }

    printList(head);

}
