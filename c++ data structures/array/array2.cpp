#include<iostream>
using namespace std;

class Array2
{
    protected:
    int size;
    int *array;
    void arrcrt(void);
    void arrsort(void);
    void arrprt(void);
    void arrsearch(void);
    public:
    Array2()
    {
        cout<<"Let's create an array"<<endl;
        arrcrt();
        cout<<"Menu:\n";
        int choice,s=1;
        while(s==1)
        {
            cout<<"\nPress\n0 To stop the execution\n1 To print array\n2 To sort array\n3 To search element in array\n"<<"Enter choice: "<<endl;
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
                    arrsort();
                    break;
                case 3:
                    arrsearch();
                    break;
                default:
                    cout<<"Invalid choice";
                    break;
            }
        }
    }
};


void Array2::arrcrt(void)
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

void Array2::arrprt(void)
{
    for( int j=0;j<size;j++)
    {
        cout<<array[j]<<endl;
    }
    cout<<endl;
}

void Array2::arrsort(void)
{
    int temp;
    for(int i=0;i<size-1;i++)
    {
        for(int j=0;j<size-i-1;j++)
        {
            if(array[j]>array[j+1])
            {
                temp=array[j];
                array[j]=array[j+1];
                array[j+1]=temp;
            }
        }
    }
    //cout<<"Sorted array:\n";
    //arrprt();
}

void Array2::arrsearch(void)
{
    int e,a=0;
    cout<<"Enter the element you want to search: ";
    cin>>e;
    arrsort();
    int low = 0;
    int high = size - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;  // Calculate mid

        // Check if target is at mid
        if (array[mid] == e) {
            a=1;
            break;  // Target found
        }

        if (array[mid] < e) {
            low = mid + 1;
        }

        else {
            high = mid - 1;
        }
    }

    if(a==1)
    cout<<"\nElement found in array!\n";
    else
    cout<<"\nElement not exist in an array.\n";
}


main()
{
    Array2 a;   
}



