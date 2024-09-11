#include<iostream>
using namespace std;

struct node
{
struct node *pre;
int i;
struct node *next;
};

void prt(struct node *h1,struct node *h2,int c1,int c2)
{
    struct node *q,*r,*u,*p,*s;
    
    q=h1;
    u=h2;
    
    if (c1>c2)
    s=q;
    else
    s=u;
    
    while(s!=NULL)
    {
        if(q!=NULL)
        {
            cout<<q->i<<endl;
            q=q->next;
        }
        if(u!=NULL)
        {
            cout<<u->i<<endl;
            u=u->next;
        }
        s=s->next;    
    }
    cout<<"\nThe end";
}

main()
{
    struct node *head =NULL,*t,*y;
    char a; int count1=0,count2=0;
    
    while(1)
    {
        count1++;
        t=(struct node *)malloc(sizeof(struct node));
        t->pre=NULL;
        cout<<"Enter an integer: ";
        cin>>t->i;
        t->next=NULL;
        if(head==NULL)
        head=t;
        else
        {
            y->next=t;
            t->pre=y;
        }
        y=t;
        cout<<"Enter y to continue: ";
        cin>>a;
        if(a!='y')
        break;
    }
    
   cout<<"\nSecond link list\n";

    struct node *head2=NULL;
    while(1)
    {
        count2++;
        t=(struct node *)malloc(sizeof(struct node));
        t->pre=NULL;
        cout<<"Enter an integer: ";
        cin>>t->i;
        t->next=NULL;
        if(head2==NULL)
        head2=t;
        else
        {
            y->next=t;
            t->pre=y;
        }
        y=t;
        cout<<"Enter y to continue: ";
        cin>>a;
        if(a!='y')
        break;
    }

    prt(head,head2,count1,count2);
}