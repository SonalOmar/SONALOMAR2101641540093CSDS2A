#include<bits/stdc++.h>
using namespace std;
struct node
{
    int d;
    struct node *next;
};
node *head=NULL;
void insertatbeg(int data)
{
    struct node*temp=new node();
    if(head==NULL)
    {//temp=(struct node*)malloc(sizeof(struct node*));
      temp->d=data;
      head=temp;
    }
    else
    {
      // temp=(struct node*)malloc(sizeof(struct node*));
      temp->d=data;
      temp->next=head;
      head=temp; 
    }
}
void delatbeg()
{
    struct node*temp=new node();
    temp=head;
    head=head->next;
    free(temp);
    
}
void insertatend(int data)
{
    struct node*s=head;
    while(s->next!=NULL){
         s=s->next;
    }
    struct node*temp=new node();
    temp->d=data;
    s->next=temp;
}
void deleteatend()
{
    struct node*s=head;
    while(s->next->next!=NULL)
    {
        s=s->next;
    }
    struct node*temp=s->next;
    temp=s->next;
    s->next=NULL;
    cout<<"deletenode"<<temp->d<<endl;
    free(temp);
}
void delatpos(int d)
{
    struct node*s=head;
    while(s->next->d!=d)
    {
        s=s->next;
    }
    struct node*temp=s->next->next;
    struct node*f=s->next;
    s->next=temp;
    cout<<"deletenode"<<f->d<<endl;
    free(f);
}
void insertatpos(int data,int p)
{
    int c=0;
    struct node*s=head;
    while(s!=NULL && c!=(p-1))
    {
        s=s->next;
        c++;
    }
    struct node*temp=new node();
    temp->d=data;
    struct node*t=s->next;
    s->next=temp;
    temp->next=t;
}
void print()
{
    struct node*temp;
    temp=head;
    while(temp!=NULL)
    {
        cout<<temp->d<<endl;
        temp=temp->next;
    }
}
void mid()
{
    
    struct node*sl=head;
    struct node*f=head;
    while(sl!=NULL && sl->next!=NULL && f->next->next!=NULL)
    {
        sl=sl->next;
        f=f->next->next;
    }
    cout<<"middle"<<sl->d<<endl;

}
int main()
{
    
    insertatbeg(2);

    insertatbeg(3);
    insertatend(4);
    insertatend(5);
    insertatend(9);
    deleteatend();
    insertatpos(10,2);
    mid();
    print();


}
