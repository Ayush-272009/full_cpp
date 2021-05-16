#include<iostream>
using namespace std;
int main()
{
    int n,k=5;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
     for(int j=1;j<=k;j++)
     {
         cout<<j<<" ";
     }
     cout<<endl;
      k=k-1;
    }
}