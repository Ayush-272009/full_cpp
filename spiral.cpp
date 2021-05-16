#include <bits/stdc++.h>
using namespace std;

void spiral(int a[][100], int m,int n){
    int sr=0;
    int sc=0;
    int er=m-1;
    int ec=n-1;

    while (sr<=er and sc<=ec)
    {
        //first row
        for (int i = sc ; i <= ec; i++)
        {
            cout<<a[sr][i]<< " ";
        }
        sr++;

        //last coloumn
        for (int i = sr; i <= er; i++)
        {
            cout<<a[i][ec]<<" ";
        }
        ec--;

        //bottom row
        if(er > sr){
        for (int i = ec; i >= sc; i--)
        {
            cout<<a[er][i]<<" ";
        }
        er--;
        }

        //start coloumn
        if (ec > sc)
        {
        
        for (int i = er; i >= sr; i--)
        {
            cout<<a[i][sc]<<" ";
        }
        sc++;
        
        }
    }
    
}

int main(){
    int val = 1;
    int a[100][100];
    cout<<"enter n and m"<<endl;
    int n,m;
    cin>>m>>n;

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            a[i][j] = val;
            val++;
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    
    spiral(a,m,n);
    return 0;
}