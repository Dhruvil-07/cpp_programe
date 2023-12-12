//in genral , function return only one  value 
//but some time our needs to return mutiple value from function
//so at that time , we can use  passing by ref instead of passsing by value
//and satisfy our requirement

#include<iostream>
using namespace std;

void passing_by_pointer_ref(int* c , int* d);
void passing_by_refvar_ref(int &c , int &d);

int main()
{
    int a , b;
    a= 10;
    b =20;

    cout<<a<<" "<<b<<endl;

    passing_by_pointer_ref(&a,&b);

    cout<<a<<" "<<b<<endl;

    passing_by_refvar_ref(a,b);

    cout<<a<<" "<<b<<endl;

}


void passing_by_pointer_ref(int* c , int* d)
{
    //point those value , which store at this memory address
    //and increase those values
    (*c)++;
    (*d)++;
}



void passing_by_refvar_ref(int &c , int &d)
{
    c++;
    d++;
}
