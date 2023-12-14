//dynamic array using new key word
//user define type object array
//dynamic memmory allocation

#include<iostream>
using namespace std;

class User
{
private :
    string name;
    int age;

public :

    //assign value to private member
    void set()
    {
        cout<<"Enter name : ";
        cin>>name;
        cout<<"Enter age : ";
        cin>>age;
    }


    //display all user object detail
    void display(User *u , int tol_obj)
    {
        cout<<"Name "<<"   "<<"Age"<<endl;
        for(int i = 0 ; i<tol_obj ; i++)
        {
            cout<<u[i].name<<"   "<<u[i].age<<endl;
        }
    }


};


int main()
{
    User *u;  //pointer of User class obj array
    int n;    //for , how many obj user want to store

    cout<<"how many obj do you want to store : "<<endl;
    cin>>n;

    u = new User[n];  //allocate continues memeory for array andf provide its starting address to u

    //variable for user opration choice , looping and counter
    int choice , check , counter;
    counter = 0;
    check  = 1;

    //user class obj
    User ur;


    while(check == 1)
    {
        cout<<endl;
        cout<<"1. Add user..."<<endl;
        cout<<"2. Display..."<<endl;
        cout<<"3. Exit..."<<endl;;

        cout<<"Enter choice : ";
        cin>>choice;

        switch(choice)
        {
            case 1 : if(counter>=n)
                     {
                        cout<<"Array is full : "<<endl;
                        break;
                     }
                     else
                     {
                         u[counter].set();
                         counter++;
                         break;
                     }
                    

            case 2 : ur.display(u,counter);
                     break;

            case 3 : check = 0;
                     break;

            default : cout<<"Invalid argument..."<<endl;
        }
    }

    return 0;
}


