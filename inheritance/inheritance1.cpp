//first class parent classes constructore 
//parent classes constructore call base on
//inheritance sequence of parent class
//at last , child class constructore call


#include<iostream>
using namespace std;

class A
{
    public :
        A()
        {
            cout<<"A class Constructore"<<endl;
        }
};

class B
{
    public :
        B()
        {
            cout<<"b class constructore"<<endl;
        }
};


class C : public B , public A
{
    public :
        C()
        {
            cout<<"c class constructore"<<endl;
        }
};



int main()
{
    C c1;
    return 0;
}