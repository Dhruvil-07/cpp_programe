#include<iostream>
using namespace std;

class Node
{
    int data;
    Node *next;

    public:
        Node(int data)
        {
            this->data = data;
            this->next = NULL;
        }

        friend class linkedlist;
};

class linkedlist
{
        Node *head;

        public :
        linkedlist()
        {
            head = NULL;
        }

        void insert(int val)
        {
            Node *new_node = new Node(val);

            if(head == NULL)
            {
                head = new_node;
            }
            else
            {
                new_node->next = head;
                head = new_node;
            }

        }

        void delete_data(int val)
        {
            Node *temp = head;

            if(head == NULL)
            {
                cout<<"linked list not exist..."<<endl;
            }
            else if(head->data == val)
            {
                head = head->next;
            }
            else
            {
                Node *temp2 = head->next;
                while(temp2->data != val)
                {
                    temp = temp2;
                    temp2 = temp2->next;
                }
                temp->next = temp2->next;
            }
        }


        void display()
        {
            if(head == NULL)
            {
                cout<<"linked list not exist..."<<endl;
            }
            else
            {
                Node *temp = head;
                while(temp != NULL)
                {
                    cout<<temp->data<<" ";
                    temp = temp->next;
                }
            }
        }
};



int main()
{
    linkedlist ll;

    ///value and looping
    int check=1;
    int val;
    int choice;

    while(check == 1)
    {   
        cout<<endl;
        cout<<"1. Insert data..."<<endl;
        cout<<"2. Delete data..."<<endl;
        cout<<"3. Display..."<<endl;
        cout<<"4. Exit..."<<endl;

        cout<<"Enter choice : ";
        cin>>choice;

        switch(choice)
        {
            case 1 : cout<<"Enter value : ";
                     cin>>val;
                     ll.insert(val);
                     break;

            case 2 : cout<<"Enter value : ";
                     cin>>val;
                     ll.delete_data(val);
                     break;

            case 3 : ll.display();
                     break;

            case 4 : check = 0;
                     break;

            default : cout<<"Invalid choice..."<<endl;
        }
    }
};