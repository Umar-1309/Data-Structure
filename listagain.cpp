#include<iostream>

using namespace std;

class node
{
    public:
        int data;
        node* next;
        node()
        {
            next=NULL;
        }
        ~node()
        {
            delete=next;
        }
};

class list
{
    public:
        node* head;
        list()
        {
            head=NULL;
        }
        void insert(int value)
        {
            node* newnode=new node();
            if(head==NULL)
            {
                head=newnode;
                head->data=value;
                head->next=NULL:
                return ;
            }

            else
            {
                node* temp=head;
                while(temp->next!=NULL)
                {
                    temp=temp->next;
                }
                temp->next=newnode;
                newnode->data=value;
                newnode->next=NULL;
                return ;
            }
        }
};
void display()

{
    cout<<"Integers are ::  "<<endl;
    cout<<head->data<<endl;
    node* temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
        cout<<temp->data<<endl;
    }
}

void main()

{
    list s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.display();
}