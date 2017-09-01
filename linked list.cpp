#include<iostream>
using namespace std;
class node2
{
	public:
	int data;
	node2 *next;
};
class node1
{
	public:
		node2 *temp;
		node2 *start=NULL;
		node2 *newnode;
	void createnode()
	{
	    cout<<"element:-";
		newnode=new node2();
		cin>>newnode->data;
		newnode->next=NULL;
	}
	void insertion_in_end()
	{
		int n;
		cout<<"Enter the number of elements:";
		cin>>n;
		for(int i=0;i<n;i++)
		{
			createnode();
			if(start==NULL)
			{
				start=newnode;
			}
			else
			{
				temp=start;
				while(temp->next!=NULL)
					temp=temp->next;
				temp->next=newnode;
			}
		}
	}
	void display()
	{
		temp=start;
		while(temp!=NULL)
		{
			cout<<temp->data<<"  ";
			temp=temp->next;
		}
	}
};
int main()
{
	node1 n;
	n.insertion_in_end();
	n.display();
}
