#include<iostream>
using namespace std;
int main()
{
    int n;
    int k;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
     for(int j=1;j<=n-i;j++)
     {
         cout<<" ";
     }

     for(k=1;k<=n;k++)
     {
       int z=k;
       for(int j=1;j<=k;j++)
       { 
         cout<<z<<" ";
         z=z-1;
       }
       cout<<endl;

     }
   
    }

    }
