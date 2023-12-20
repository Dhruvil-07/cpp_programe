#include<iostream>
using namespace  std;

int main()
{
    int row , column;
    int *column_arr;

    cout<<"Enter row : ";
    cin>>row;


    column_arr = new int[row];

    int **a;
    a = new int*[row];

    //get column from user
    for(int i = 0 ; i<row ; i++)
    {
        cout<<"Enter column : ";
        cin>>column;

        column_arr[i] = column;
     
        a[i] = new int[column];
    }



       for(int i = 0 ; i<row ; i++)
        {
             for(int j = 0 ; j<column_arr[i] ; j++)
            {
                cout<<"Enter value : ";
                cin>>a[i][j];
            }
        }

    

    for(int i = 0 ; i<row ; i++)
    {
        for(int j = 0 ; j<column_arr[i] ; j++)
        {
            cout<<" "<<a[i][j]<<" " ;
        }
        cout<<endl;
    }




}


