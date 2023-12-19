//unary opratore over loading

#include<iostream>
using namespace std;


class Data
{
int i;

public :
    Data()
    {
        i = 90;
    }

    
    //overload method for unary oratore
    //++ overload
    void operator++()
    {
        i++;
    }


    //-- overload
    void operator--()
    {
        i--;
    }


    //display method
    void display()
    {
         cout<<"Value of i : "<<i<<endl;
    }

};


int main()
{
    Data d;

    d.display();

    ++d;

    d.display();

    --d;

    d.display();
}