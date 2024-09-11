#include<iostream>        //header file1
using namespace std;
struct doubly                       //structure
{
	struct doubly *pre;          //member1 of structure
	int data;                   //member2 of structure
	struct doubly *next;         //member3 of structure
};
class doublelist
{
	private:         //access specifier
	struct doubly *head;    //data member
	public:         //access specifier
	doublelist()           //default constructor
	{
		head=NULL;
	}
	void create();	//declare member function inside the class
	void display_list(); //declare member function inside the class
};
	
	void doublelist :: create()		//defining member function outside the class
	{
		struct doubly *temp,*y;
		int ch;
		while(1)
		{
			temp=new (struct doubly);
			temp->pre=NULL;
			cout<<endl<<"Enter data: ";
			cin>>temp->data;
			temp->next=NULL;
			if(head==NULL)
				head=temp;
			else
			{
				y->next=temp;
				temp->pre=y;
			}
			y=temp;
			cout<<endl<<"Type 1 to store more data into list: ";
			cin>>ch;
			if(ch!=1)
				break;
		}
	}
	
	void doublelist :: display_list()      //defining member function outside the class
	{
		struct doubly *temp;
		for(temp=head;temp!=NULL;temp=temp->next)
			cout<<endl<<temp->data;
	}

main()
{
	doublelist obj; 	//object creation
	obj.create();           //calling of member function
	obj.display_list();  	//calling of member function
}



