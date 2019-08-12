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
int main()
{
    struct Node* head = NULL;

    /* Use push() to construct below list
    1->2->1->3->1 */
    push(&head, 1);
    push(&head, 3);
    push(&head, 9);
    push(&head, 2);
    push(&head, 8);
    //struct Node* curr = (struct Node*) malloc(sizeof(struct Node));
    struct Node* p1 = head;
    //struct Node* p2 = NULL;
    struct Node* curr = head;
    while(p1!=NULL&&p1->next!=NULL)
    {
        p1=p1->next->next;
       // p2=curr->next;
        curr=curr->next;
    }
    printf("%d",curr->data);


}
