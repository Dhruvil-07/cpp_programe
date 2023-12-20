#include<iostream>
using namespace  std;

int main()
{
    int row , column;

    cout<<"Enter row : ";
    cin>>row;

    cout<<"Enter column : ";
    cin>>column;

    int **a;
    a = new int*[row];

    //get column from user
    for(int i = 0 ; i<row ; i++)
    {
     
        a[i] = new int[column];
    }


    for(int i = 0 ; i<row ; i++)
    {
        for(int j = 0 ; j<column ; j++)
        {
            cout<<"Enter value : ";
            cin>>a[i][j];
        }
    }


    for(int i = 0 ; i<row ; i++)
    {
        for(int j = 0 ; j<column ; j++)
        {
            cout<<" "<<a[i][j]<<" " ;
        }
        cout<<endl;
    }




}


