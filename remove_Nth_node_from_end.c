/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 *
 * typedef struct ListNode listnode;
 *
 * listnode* listnode_new(int val) {
 *     listnode* node = (listnode *) malloc(sizeof(listnode));
 *     node->val = val;
 *     node->next = NULL;
 *     return node;
 * }
 */
/**
 * @input A : Head pointer of linked list
 * @input B : Integer
 *
 * @Output head pointer of list.
 */
 listnode* reverse(listnode* head)
 {
     listnode* curr=head;
     listnode* prev=NULL;
     listnode* next=NULL;

     while(curr)
     {
         next=curr->next;
         curr->next=prev;
         prev=curr;
         curr=next;
     }
     return prev;
 }
listnode* removeNthFromEnd(listnode* A, int B) {
    listnode* curr=A;
    listnode* prev=A;
    listnode* ptr=NULL;
     int size=0;
     while(curr)
     {
         size++;
         curr=curr->next;
     }
     if(B>=size)
     {
         listnode* p1=A;
         if(A==NULL)
         return;
         else
         {
             listnode* temp=A;
             p1=p1->next;
             free(temp);
             temp=NULL;
         }
         return p1;
     }
    curr=A;
    ptr=reverse(A);
    curr=ptr;
    prev=ptr;
    int i=1;
    if(B==1)
    {
     if(ptr==NULL)
         return;
     listnode* p1=ptr;
     listnode* temp=ptr;
     p1=p1->next;
     free(temp);
     temp=NULL;
     listnode* res1=reverse(p1);
     return res1;
    }
    while(curr&&i<B)
    {
        prev=curr;
        curr=curr->next;
        i++;
    }
    prev->next=curr->next;
    free(curr);
    listnode* res=reverse(ptr);
    return res;
}
