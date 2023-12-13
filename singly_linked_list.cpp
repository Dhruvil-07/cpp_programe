#include<iostream>
using namespace std;

class Node
{
    int data;
    Node* next;

public :

     Node(int data)
     {    
        this ->data = data;
        this ->next = NULL;
     }

     friend class LinkedList;
};


class LinkedList
{
     //head pointer 
    Node* head;

    public :
   
    LinkedList()
    {
        head = NULL;
    }


    //greeting function
    void greeting(char* greet)
    {
        cout<<greet<<" Successfully"<<endl;
    }


    //insert at beging
    void insert_at_start(int data)
    {
        // Node* new_node = new Node(data)
        Node* new_node = new Node(data);
  
        if(head == NULL)
        {         
            head = new_node;
            greeting("Insert");
        }
        else
        {
           new_node->next = head;
           head = new_node;
           greeting("Insert");
        }
    }



    //insert at end
    void insert_at_end(int data)
    {
        Node* new_node = new Node(data);

        Node* temp = head; 
        while (temp->next != NULL)
        {
            temp = temp->next;
        }

        //add new node
        temp->next = new_node;
        greeting("Insert");
    }


    //delete at begining
    void delete_from_beiging()
    {
        head = head->next;
        greeting("Delete");
    }


    //delete at end
    void delete_from_end()
    {
        Node* temp = head;
        Node* temp2 = temp->next;

        if(head->next == NULL)
        {
            head = NULL;
            greeting("Delete");
        }
        else
        {
            while(temp2->next != NULL)
            {
                 temp = temp2;
                 temp2 = temp2->next;
            }

            temp->next = NULL;
            greeting("Delete");
        }
    }


    //display linked list+++
    void display()
    {
       Node* temp = head;

        if(head == NULL)
        {
            cout<<"Linked List not exist..."<<endl;
        }
        else
        {
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
    //variable for value , choice , looping
    int val , choice;
    bool check = true;

    LinkedList ll;

    while(check)
    {
        cout<<endl;
        cout<<"1. Insert At Begining..."<<endl;
        cout<<"2. Insert At End..."<<endl;
        cout<<"3. Delete From Begining..."<<endl;
        cout<<"4. Delete From End..."<<endl;
        cout<<"5. Display...."<<endl;
        cout<<"6. Exit...."<<endl;

        cout<<"Enter choice : ";
        cin>>choice;

        switch(choice)
        {
            case 1 : cout<<"Enter value : ";
                     cin>>val;
                     ll.insert_at_start(val);
                     break;

            case 2 : cout<<"Enter value : ";
                     cin>>val;
                     ll.insert_at_end(val);
                     break;

            case 3 : ll.delete_from_beiging();
                     break;

            case 4 : ll.delete_from_end();
                     break;
                    
            case 5 : ll.display();
                     break; 

            case 6 : check = false;
                     break;

            default : cout<<"Invalid choice..."<<endl;

                     
        }
    }
}
