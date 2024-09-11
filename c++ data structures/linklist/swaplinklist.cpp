#include <iostream>
using namespace std;

struct node
{
    struct node *pre;
    int i;
    struct node *next;
};
/*
void swap1 (struct node *h1)
{
    struct node *a,*b,*cj;
    int c,d=1,e;

    for(b=h1;b->next!=NULL;b=b->next,d++);

    for(e=1,a=h1;e<=(d/2);a=a->next,e++)
    {
            c=a->i;
            a->i=b->i;
            b->i=c;
            b=b->pre;
    }

    for(a=h1;a!=NULL;a=a->next)
    {
        cout<<endl<<a->i;
    }
}
*/
void swap2(struct node *h1)
{
    struct node *a,*b;


    for(a=h1;a!=NULL;a=a->pre)
    {
        b=a->pre;
        a->pre=a->next;
        a->next=b;
        h1=a;
    }
    for(a=h1;a!=NULL;a=a->next)
    {
        cout<<a->i<<endl;
    }



}

main()
{
    struct node *head = NULL, *t, *y;
    char a;

    while (1)
    {
        t = (struct node *)malloc(sizeof(struct node));
        t->pre = NULL;
        cout << "Enter an integer: ";
        cin >> t->i;
        t->next = NULL;
        if (head == NULL)
            head = t;
        else
        {
            y->next = t;
            t->pre = y;
        }
        y = t;
        cout << "Enter y to continue: ";
        cin >> a;
        if (a != 'y')
            break;
    }

    swap2(head);
}