

 

/* Link list Node
struct Node {
  int data;
  struct Node *next;
  
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/
//Function to merge two sorted linked list.
Node* sortedMerge(Node* a, Node* b)  
{  
    // code here
    struct Node* t;
    struct Node* h;
    while(a!=NULL && b!=NULL)
    {
        if(a->data < b->data)
        {
             struct Node* n=new Node(a->data);
             if(t==NULL)
             {
                 t=n;
                 h=t;
             }
            else
            {
                t->next=n;t=n;
            }
            
            a=a->next;
        }
        else
        {
            struct Node* n=new Node(b->data);
            if(t==NULL)
             {
                 t=n;
                 h=t;
             }
            else
            {
                t->next=n;t=n;
            }
            b=b->next;
        }
    }
    while(a!=NULL)
    {
        struct Node* n=new Node(a->data);
         if(t==NULL)
             {
                 t=n;
                 h=t;
             }
            else
            {
                t->next=n;t=n;
            }
        a=a->next;
    }
    while(b!=NULL)
    {
        struct Node* n=new Node(b->data);
         if(t==NULL)
             {
                 t=n;
                 h=t;
             }
            else
            {
                t->next=n;t=n;
            }
        b=b->next;
    }
    return h;
}  