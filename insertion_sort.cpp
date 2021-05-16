//#include<iostream>
#include <bits/stdc++.h>

using namespace std;
void insertion_sort(int a[],int n)
{
    //put all elements from index 1 to n-1 at their correct position
  for (int i = 1; i <= n-1; i++)
   {   
       int e = a[i];  //current position

       //place the current element at the right position in the sorted part

       int j = i-1;
       while (j>=0 and a[j]>e)
       {
           a[j+1]=a[j];
           j=j-1;
       }

       a[j+1] = e;
       
     
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

   insertion_sort(a,n); 

   cout<<"SORTED ELEMENTS"<<endl;

   for (int i = 0; i < n; i++)
   {
       cout<<a[i]<<",";

   }

   return 0;

}