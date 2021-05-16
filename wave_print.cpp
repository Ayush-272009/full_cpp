#include<iostream>
using namespace std;

int main()
{
    int a[10][10];
    int n=0;
    int m=0;
    //cout<<"enter the size of an 2 D array"<<endl;
    cin>>n;
    cin>>m;
    int val=1;

    cout<<sizeof(a)<<endl;

    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < m; col++)
        {
            a[row][col]=val;
            val++;
            cout<<a[row][col]<<"  ";
        }
        cout<<endl;
    }

    for (int col = 0; col < m; col++)
    {
        if (col%2==0)
        {
            for (int row = 0; row < n; row++)
            {
                cout<<a[row][col]<<" ";
            }
            
        }
        else
        {
          for (int row = n-1; row >= 0; row--)
            {
                cout<<a[row][col]<<" ";
            }
        }
        
        
    }
    

    return 0;
    
}