#include<iostream>
using namespace std;

int main()
{
    int m1[2][2] = 
    {
        {1,2},
        {3,4}
    };

    int m2[2][2] = 
    {
        {1,2},
        {3,4}
    };

    int m3[2][2];

    int val;


    /*

    //enter value in marix
    for(int i = 0 ; i<3 ; i++)
    {
        for(int j = 0 ; j<3 ; j++)
        {
            cout<<"Enter value : ";
            cin>>val;

            m[i][j] = val;

            cout<<endl;
        }
    }

    //print matrix
    for(int i = 0 ; i<3 ; i++)
    {
        for(int j = 0 ; j<3; j++)
        {
            cout<<" "<<m[i][j]<<" ";
        }
        cout<<endl;
    }
    */
    
    /*
 //additon of matrix
    for(int i = 0 ; i<2 ; i++)
    {
        for(int  j = 0 ; j<2 ; j++)
        {
            m3[i][j] = m1[i][j] + m2[i][j];
        }
    }


    //display result matrix
    for(int i = 0 ; i<2 ; i++)
    {
        for(int j = 0 ; j<2 ; j++)
        {
            cout<<" "<<m3[i][j]<<" ";
        }
        cout<<endl;
    }
*/
   

    //muliplication of metrix
    for(int i = 0 ; i<2 ; i++)
    {
            for(int j = 0 ; j<2 ; j++)
            {
                m3[i][j] = 0;
                for(int k = 0 ; k<2 ; k++)
                {
                    m3[i][j] += m1[i][k] * m2[k][j];
                }
            }
    }


    for(int i = 0 ; i<2 ; i++)
    {
        for(int j = 0 ;j<2 ; j++)
        {
            cout<<" "<<m3[i][j]<<" ";
        }
        cout<<endl;
    }

}