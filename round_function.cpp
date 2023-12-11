#include<iostream>
using namespace std;

int main()
{
    float num;
    cout<<"Enter number : ";
    cin>>num;


    int ren , rem;
    ren = num * 10;
    cout<<ren<<endl;
    rem = ren % 10;
    cout<<rem<<endl;
    ren = ren / 10;
    cout<<ren<<endl;

    if(rem <=5)
    {
        cout<<ren;
    }
    else
    {
        cout<<ren+1;
    }

    return 0;
}