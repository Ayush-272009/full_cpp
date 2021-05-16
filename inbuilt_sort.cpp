#include <bits/stdc++.h>

using namespace std;

bool compare(int a,int b){
    return a < b;
}

int main()
{
    int a[1000];
    int n;
    cout<<"enter no. of element"<<endl;
    cin>>n;
    
    cout<<"enter elements"<<endl;
  for (int i = 0; i < n; i++)
   {
       cin>>a[i];

   }

   sort(a,a+n,compare); 

   cout<<"SORTED ELEMENTS"<<endl;

   for (int i = 0; i < n; i++)
   {
       cout<<a[i]<<",";

   }

   return 0;

}