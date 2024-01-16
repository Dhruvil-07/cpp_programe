//asignment opratore overloading 

#include<iostream>
using namespace std;

class Number
{
    int n;

public :
    Number(int n)
    {
        this->n = n;
    }

    //copy one obj value to another 
    void operator=(const Number &num)
    {
         n = num.n;
    }



    //add one obj value to another 
    void operator+=(const Number &num)
    {
        n += num.n;
    }

    void display()
    {
      cout<<n<<endl;
    }

};


int main()
{
    Number n1(10) , n2(20);

    n1.display();
    n2.display();

    n1 = n2;

    n1.display();

    n1 += n2;

    n1.display();
}