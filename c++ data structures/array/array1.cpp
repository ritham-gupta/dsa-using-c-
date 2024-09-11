#include<iostream>
using namespace std;

class Array
{
    int size;
    int *array;
    void arrcrt(void);
    void arrprt(void);
    void arrmaxmin(void);
    void arrrev(void);
    public:
    Array()
    {
        cout<<"Let's create an array"<<endl;
        arrcrt();
        cout<<"Menu:\n";
        int choice,s=1;
        while(s==1)
        {
            cout<<"\nPress\n0 To stop the execution\n1 To print array\n2 To find max and min values in an array.\n3 To print array in reverse order\n"<<"Enter choice: "<<endl;
            cin>>choice;
        
            switch (choice)
            {
                case 0:
                    s=0;
                    break;
                case 1:
                    arrprt();
                    break;
                case 2:
                    arrmaxmin();
                    break;
                case 3:
                    arrrev();
                    break;
                default:
                    cout<<"Invalid choice";
                    break;
            }
        }
    }
};

void Array::arrcrt(void)
{
    cout<<"Enter the size of array: ";
    cin>>size;
    array= new int[size];
    cout<<"Enter array elements: "<<endl;
    for ( int i = 0; i<size;i++)
    {
        cin>>array[i];
    }
    cout<<endl;
}

void Array::arrprt(void)
{
    for( int j=0;j<size;j++)
    {
        cout<<array[j]<<endl;
    }
    cout<<endl;
}

void Array::arrmaxmin(void)
{
    int max=array[0];
    int min=array[0];
    
    
    for( int k=1;k<size;k++)
    {
        if(array[k]>max)
        {
            max=array[k];
        }
        if(array[k]<min)
        {
            min=array[k];
        }
    }
    cout<<"Max num in array = "<<max<<endl<<"Min num in array = "<<min<<endl;

}

void Array::arrrev(void)
{
    for(int i=size-1;i>=0;i--)
    {
        cout<<array[i]<<endl;
    }
}



int main()
{
    Array obj;
    return 0;
}
