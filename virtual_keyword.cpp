#include<iostream>
using namespace std;

class X
{
    public:
        virtual  void print()
        {
            cout<<"x class method..."<<endl;
        }
};


class Y : public X
{
    public :
        void print()
        {
            cout<<"y class method..."<<endl;
        }
};


int main()
{
    X x1 , *xp;
    Y y1 , *yp;

    x1.print();
    y1.print();


    xp = &x1;
    xp->print();

    xp = &y1;
    xp ->print();


    return 0;
}