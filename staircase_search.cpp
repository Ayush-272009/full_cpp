#include<iostream>
using namespace std;

void search(int a[][100],int m, int n){

    int x;
    cout<<"no. to be searched"<<endl;
    cin>>x;
    int i = 0;
    int j = n-1;

    //m - no. of rows
    //n - no. of coloumns

    int flag = 0;


    while (i<m and j>=0)
    {
        if (a[i][j]==x)
        {
            flag = 1;
            break;
        }

        if (a[i][j] > x)
        {
            j--;
        }
        
        if (a[i][j] < x)
        {
            i++;
        }
        
    }

    if (flag==1)
    {
        cout<<x<<"  found at "<<" i = "<<i<<" j = "<<j<<endl;
    }

    else{
       cout<<"NOT FOUND"<<endl;
    }
    
    
}

int main(){

    int b[100][100];
    int m,n;
    cin>>m>>n;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin>>b[i][j];
        }
        
    }

    search(b,m,n);

    return 0;
    
}