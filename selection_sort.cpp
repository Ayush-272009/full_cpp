//#include<iostream>
#include <bits/stdc++.h>

using namespace std;
void selection_sort(int a[],int n)
{
  for (int i = 0; i < n-1; i++)
   {   
      int min_index = i;

     //finding smallest element index in unsorted part
     for (int j = i; j <= n-1; j++)
     {
       if (a[j] < a[min_index])
       {
           min_index = j;
       }
       
     }
     swap(a[i],a[min_index]);
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

   selection_sort(a,n); 

   for (int i = 0; i < n; i++)
   {
       cout<<a[i]<<",";

   }

   return 0;

}