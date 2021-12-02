#include<iostream>

using namespace std;

class node
{
    public:
        char data;
        node *next;
        node()
        {
            next=NULL;
        }

        ~node()
        {
            delete next;
        }

};

class linklist

{
    public:
        node *head;
        linklist()
        {
            head = NULL;
        }

        void insert(char a)
        {
            node *newnode=new node();
            if(head==NULL)
            {
                head=newnode;
                head->data=a;
                head->next=NULL;
            }

            else
            {
                node *temp=head;
                while(temp->next!=NULL)
                {
                    temp=temp->next;

                }
                temp->next=newnode;
                newnode->data=a;
                newnode->next=NULL;
            }

        }

        void display()
	{
		cout<<"Intergers are : "<<endl;
		cout<<head->data<<endl;
		node *temp=head;
		while(temp->next!=NULL)
		{
			temp=temp->next;
			cout<<temp->data<<endl;
		}
	}

};
    int main()
    {
        linklist obj;
        obj.insert('a');
    }