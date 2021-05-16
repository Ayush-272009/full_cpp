#include <bits/stdc++.h>
using namespace std;

void rotate(int a[][10],int n,int m){

    cout<<"in rorate"<<endl;


    for (int row = 0; row < n; row++)
    {
        int startCol = 0;
        int endCol = n-1;
        while (startCol<endCol)
        {
            swap(a[row][startCol],a[row][endCol]);
            startCol++;
            endCol--;
        }
        
    }
    // transpose
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            //we are using upper triangle
            if (i<j)
            {
                swap(a[i][j],a[j][i]);

            }
            
        }
        
    }

    //printing of output
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {

            cout<<a[i][j]<<" ";

        }
        cout<<endl;
    }
    
}

int main(){

    int b[10][10] = {0};
    int n,m;
    cin>>n>>m;
    int val = 1;
   
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {

            b[i][j] = val;
            val++;
            cout<<b[i][j]<<" ";

        }
        cout<<endl;
    }

    rotate(b,n,m);
    return 0;
}