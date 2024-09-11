#include <iostream>
using namespace std;

struct node
{
    struct node *pre;
    int i;
};

class st
{
    struct node *top = NULL;

public:
    void push();
    void disp();
    void pop();
    int is_empty();
};

void st::push()
{
    int t;
    while (1)
    {
        struct node *a;
        a = new (struct node);
        a->pre = top;
        cout << "Enter the number: ";
        cin >> a->i;
        top = a;
        cout << "press 1 to continue: ";
        cin >> t;
        if (t != 1)
            break;
    }
}

int st::is_empty()
{
    if (top == NULL)
        return (1);
    else
        return (0);
}

void st::pop()
{
    cout<<"\ndelete a data\n";
    int a;
    struct node *ij = top;
    if (a == 1)
        cout << "\nStack underflow\n";
    else
    {
        cout << "\nData deleted " << ij->i;
        top = top->pre;
        delete (ij);
    }
    disp();
}

    void st::disp()
    {
        struct node *q;
        int a;
        a = is_empty();
        if (a == 1)
            cout << "\nStack underflow\n";
        else
        {
            for (q = top; q != NULL; q = q->pre)
                cout << "\n"
                     << q->i;
        }
    }

    main()
    {
        st obj;
        obj.push();
        obj.disp();
        obj.pop();
    }

