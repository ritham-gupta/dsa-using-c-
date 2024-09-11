#include <iostream>
using namespace std;

main()
{
    int c,r;
    cout<<"Enter no of columns & rows: ";
    cin>>c>>r;
    for (int i=0;i<=r;i++)
    {
        for(int j=0;j<=c;j++)
        {
            if (i==0 || i==r || j==0 || j==c)
            cout<<"*";
            else
            cout<<" ";
        }
        cout<<endl;
    }
}


