#include<iostream>
using namespace std;

template<class t ,  int size>
class Stack
{
private :
    t a[size];
    int top;

public :
    Stack()
    {
        top = -1;
    }

    void insert(t val)
    {
        top++;

        if(top>=size)
        {
            cout<<"Stack is Overflow..."<<endl;
        }
        else
        {
            a[top] = val;
            cout<<"Inserted successfully..."<<endl;
            display();
        }
    }



    void delet()
    {

        if(top < 0)
        {
            cout<<"Stack is UnderFlow.."<<endl;
        }
        else
        {
            top--;
            cout<<"Deleted Successfully..."<<endl;
            display();
        }
    }


    void display()
    {
        if(top == -1)
        {
            cout<<"Stack is UnderFlow..."<<endl;
        }
        else
        {
            for(int i = 0 ; i<=top ; i++)
            {
                cout<<a[i]<<" ";
            }
            cout<<endl;
        }
    }

};


int main()
{
    //Stack class obj
    Stack<int,5> s;

    //variable for choice , value and looping
    int choice , check , val;
    check =  1;

    while(check == 1)
    {
        cout<<endl;
        cout<<"1. Push Element..."<<endl;
        cout<<"2. Pop Element..."<<endl;
        cout<<"3. Display..."<<endl;
        cout<<"4. Exit..."<<endl;

        cout<<"Enter Choice : ";
        cin>>choice;

        switch (choice)
        {
        case 1:  cout<<"Enter value : "<<endl;
                 cin>> val;
                 s.insert(val);
                 break;

        case 2 : s.delet();
                 break;

        case 3 : s.display();
                 break;

        case 4 : check = 0;
                 break;
        
        default: cout<<"Invalid argument..."<<endl;
        }
    }


    return 0;
}