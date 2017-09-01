#include<iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
};
class node1
{
    public:
    node *temp;
    node *start=NULL;
    node *newnode;
    void createnode()
    {
        newnode=new node();
        cin>>newnode->data;
        newnode->next=NULL;
    }
    void linking_in_front()
    {
        int n;
        cout<<"enter the elements";
        cin>>n;
        for(int i=0;i<n;i++)
        {
            createnode();
            if(start==NULL)
                start=newnode;
            else
                newnode->next=start;
            start=newnode;
        }
    }
    void display()
    {
        temp=start;
        while(temp!=NULL)
           {
             cout<<temp->data;
        temp=temp->next;
           }
    }
};
int main()
{
    node1 n;
    n.linking_in_front();
    n.display();
}
