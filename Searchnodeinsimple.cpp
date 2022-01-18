#include<iostream>

using namespace std;

class node
{
	public:
		int data;
		node* next;
		node(int val)
		{
			data=val;
			next==NULL;
		}
};

void insertAtHead(node* &head,int val)
{
	node* newnode=new node(val);
	newnode->next=head;
	head=newnode;
}

void insertAtTail(node* &head,int val)
{
	
	node* newnode=new node(val);
	if(head==NULL)
	{
		head=newnode;
		return;
	}
	node* temp=head;
	while(temp->next!=NULL)
	{
		temp=temp->next;
	}
	temp->next=newnode;
	
}

void display(node* head)
{
	node* temp=head;
	while(temp!=NULL)
	{
		cout<<temp->data<<"->";
		temp=temp->next;
	}
	cout<<"NULL"<<endl;
}

bool search(node* head,int key)
{
	node* temp=head;
	while(temp!=NULL)
	{
		if(temp->data==key)
		{
			return true;
		}
		temp=temp->next;
	}
	return false;
}


int main()
{
	node* head=NULL;
	insertAtTail(head,1);
	insertAtTail(head,2);
	insertAtTail(head,3);
	display(head);
	insertAtHead(head,4);
	display(head);
	cout<<search(head,5)<<endl;
		cout<<search(head,3)<<endl;
	return 0;
	
}
