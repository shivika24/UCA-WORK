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
 *
 * @Output Integer
 */
 void reverse(listnode** head)
 {
     listnode* curr=*head;
     listnode* prev=NULL;
     listnode* next=NULL;
     while(curr)
     {
         next=curr->next;
         curr->next=prev;
         prev=curr;
         curr=next;
     }
     *head=prev;
 }
int compare(listnode* he1,listnode* he2)
{
    listnode* curr=he1;
    listnode* h1=he2;
    int res=0;
     while(curr&&h1)
    {
        if(curr->val==h1->val)
        {
            curr=curr->next;
            h1=h1->next;
        }
        else
        {
           return 0;
        }
      }
        if (h1== NULL && curr == NULL)
        return 1;
        return 0;
}
int lPalin(listnode* A) {
    if(A==NULL)
    return 0;
    if(A->next==NULL)
    return 1;
    listnode* curr=A;
    int size=0,i=0;
    while(curr)
    {
        size++;
        curr=curr->next;
    }
    int arr[size],res=1;
    *curr=A;
    while(curr)
    {
        arr[i]=curr->data;
        curr=curr->next;
        i++;
    }
    int j=size-1;
    for(i=0;i<size;i++)
    {
     if(arr[i]!=arr[j])
     {
         res=0;
         break;
     }
     else
     j--;
    }
 /*   int res;
    listnode* h1=NULL;
    listnode* curr=A;
    listnode* p1=A;
    listnode* p2=A,*prev=A,*mid=A;
    while(p1&&p1->next)
    {
        p1=p1->next->next;
        prev=p2;
        p2=p2->next;
    }
    if(p1!=NULL)
    {
        p2=p2->next;
    }
    prev->next=NULL;
    reverse(&p2);
    res=compare(A,p2);

    return res;*/
}
