#include<iostream>
using namespace std;

main()
{
    int n,k;
    cout<<"Enter value of n: ";
    cin>>n;
    
    for(int i=n; i>=0; i--)
    {
        for(int j=0; j<i; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }

    for(int i=n;i>=0;i--)
    {
        for (int j=i;j<n;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}