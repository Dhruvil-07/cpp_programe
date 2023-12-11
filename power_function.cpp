#include<iostream>
using namespace std;

void power(int base , int pow);

int main()
{
    int a , b;
    cout<<"Enter base valu : ";
    cin>>a;

    cout<<"Enter power value : ";
    cin>>b;

    power(a,b);

    return 0;
}


void power(int base , int pow)
{
    for(int i = 2 ; i<=pow ; i++)
    {
        base = base * base ;
    }

    cout<<"Ans : "<<base<<endl;
}