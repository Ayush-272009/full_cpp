#include <bits/stdc++.h>
using namespace std;
void using_stl(int a[][10],int n ,int m){
    
    
     cout<<"using stl"<<endl;
    
     for (int row = 0; row < n; row++)
    {
        reverse(a[row],a[row]+n);
        
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

    using_stl(b,n,m);
    return 0;
}