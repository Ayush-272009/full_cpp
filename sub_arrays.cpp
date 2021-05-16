#include<iostream>
using namespace std;

void sub_array(int a[],int n){

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            for (int k = i; k <= j; k++)
            {
                cout<<a[k]<<",";
            }
            cout<<endl;
            
        }

        
        
    }
    
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

   sub_array(a,n);
   

   return 0;

}