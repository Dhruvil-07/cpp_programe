#include<iostream>
using namespace std;

int  main()
{
    int n;
    cout<<"Hiow many data do you want to enter : ";
    cin>>n;

    int* ptr;
    ptr = (int*) malloc(4 * n);

    for(int i = 0; i<n ; i++)
    {
        cout<<"Enter Value :";
        cin>>ptr[i];
    }

    for(int i = 0  ; i<n ; i++)
    {
        cout<<*(ptr+i)<<" ";
    }

}