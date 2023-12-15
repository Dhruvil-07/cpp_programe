//template function to achive genricity

#include<iostream>
using namespace std;

template<typename T> T add(T a , T b)
{
    return (a+b);
}

int main()
{
    cout<<"Interge sum : "<<add(10,20)<<endl;
    cout<<"Float sum : "<<add(10.5,20.5)<<endl;
    return 0;
}