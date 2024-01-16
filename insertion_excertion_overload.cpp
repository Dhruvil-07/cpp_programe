//cout is a object of ostream classs
//cin is  a objecct of istream class
//we overload this teo operator 

#include<iostream>
using namespace std;

class Person
{
public :
  
    int age;
    friend ostream &operator<<(ostream &output,Person &p);
    friend istream &operator>>(istream &input ,Person &p);

};

ostream &operator<<(ostream &output , Person &p)
{
        output<<"Person age : "<<p.age<<endl;
        return output;
}


 istream &operator>>(istream &input , Person &p)
 {
        cout<<"Enter age : "<<endl;
        input>>p.age;

        return input;
 }



int main()
{
    Person p1;
    cin>>p1;
    cout<<p1;
}