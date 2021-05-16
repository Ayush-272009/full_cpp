#include<iostream>
using namespace std;
int main()
{
    int n;
   // int k=5;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
     for(int j=1;j<=n-i;j++)
     {
         cout<<" ";
     }
     //k=k-1;
    for(int i=1;i<=n;i++)
    {
        cout<<"*";
    }
    cout<<endl;

    }
}