//#include<iostream>
#include <bits/stdc++.h>

using namespace std;
void bubble_sort(int a[],int n)
{
  for (int itr = 1; itr < n-1; itr++)
   {  
     //pairwise swpping
     for (int j = 0; j <= (n-itr-1); j++)
     {
       if (a[j] > a[j+1])
       {
           swap(a[j],a[j+1]);
       }
       
     }
     
   }

}

int main(){
    int a[1000];
    int n;
    cout<<"enter no. of element"<<endl;
    cin>>n;
    
    cout<<"enter elements"<<endl;
  for (int i = 0; i < n; i++)
   {
       cin>>a[i];

   }

   bubble_sort(a,n); 

   cout<<"SORTED ELEMENTS"<<endl;

   for (int i = 0; i < n; i++)
   {
       cout<<a[i]<<",";

   }

   return 0;

}