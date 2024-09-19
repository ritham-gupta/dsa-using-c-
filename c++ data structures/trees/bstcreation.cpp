#include <iostream>
using namespace std;

struct node
{
    struct node *lchild;
    int data;
    struct node *rchild;
};

struct nodel
{
    struct nodel *pre;
    struct node *i;
};

class bst
{
    struct node *root;
    struct nodel *top = NULL;

public:
    void push(struct node *);
    void disp();
    struct node *pop();
    int is_empty();
    void creation(void);
    void inorder(void);
    void search(void);
    void preorder();
};

void bst::creation()
{
    struct node *a, *y, *t;
    root = NULL;
    int ch, b = 0;
    while (1)
    {
        a = new (struct node);
        a->lchild = NULL;
        cout << "Enter an interger: ";
        cin >> a->data;
        a->rchild = NULL;

        if (root == NULL)
            root = a;

        else
        {
            for (y = root; y != NULL;)
            {
                t = y;
                if (y->data > a->data)
                    y = y->lchild;

                else if (y->data < a->data)
                    y = y->rchild;

                else
                    break;
            }

            if (t->data > a->data)
                t->lchild = a;

            else
                t->rchild = a;
        }

        b = 0;
        cout << "Press 1 to continue: ";
        cin >> ch;
        if (ch != 1)
            break;
    }
}

void bst::push(struct node *a)
{
    int t;
    struct nodel *pp = new (struct nodel);
    pp->pre = top;
    pp->i = a;
    top = pp;
}

int bst::is_empty()
{
    if (top == NULL)
        return (1);
    else
        return (0);
}

struct node *bst::pop()
{
    int a;
    struct nodel *ij = top;
    struct node *pp = ij->i;
    if (a == 1)
        cout << "\nStack underflow\n";
    else
    {
        top = top->pre;
        delete (ij);
        return pp;
    }
}

void bst::inorder()
{
    struct node *y = root;
    do
    {
        while (y != NULL)
        {
            push(y);
            y = y->lchild;
        }
        y = pop();
        cout << y->data << endl;
        y = y->rchild;
    } while (y != NULL || is_empty() != 1);
}

void bst::preorder()
{
    struct node *y = root;
    struct node *a = root;

    do
    {
        while (y != NULL)
        {
            cout << y->data;
            push(y);
            y = y->lchild;
        }

        y = pop();
        y = y->rchild;
    } while (y != NULL || is_empty() != 1);
}

void bst ::search()
{
    struct node *y = root;
    int a;
    cout << "Enter data: ";
    cin >> a;
    while (y != NULL)
    {
        if (y->data == a)
        {
            cout << "Data found";
            break;
        }
        else if (a > y->data)
            y = y->rchild;
        else
            y = y->lchild;
    }
    if (y == NULL)
        cout << "\ndata not found";
}

main()
{
    bst b;
    b.creation();
    //b.inorder();
    b.preorder();
    // b.search();
}

void bst::notleaf()
{
    struct node *y = root;
    do
    {
        while (y != NULL)
        {
            push(y);
            y = y->lchild;
        }
        y = pop();
        if ( y->rchild!=NULL || y->lchild!=NULL )
        cout << y->data << endl;
        y = y->rchild;
    } while (y != NULL || is_empty() != 1);
}

//<><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><>
