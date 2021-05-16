#include<iostream>
using namespace std;
int cur_sum = 0;
int max_sum = 0;
int l = -1;
int r = -1;
int i =0;
int j = 0;
void max_sum_sub_array(int a[],int n){

    for ( i = 0; i < n; i++)
    {
        for ( j = i; j < n; j++)
        {   
            cur_sum = 0;
            for (int k = i; k <= j; k++)
            {
                cur_sum = cur_sum + a[k];
            }
        
             if (cur_sum > max_sum)
           {
         
            max_sum = cur_sum;
            l = i;
            r = j;
         
            }

        }
       
    }

    cout<<"MAXSUM IS    "<<max_sum<<endl;
    for (int b = l; b <= r; b++)
    {
        cout<<a[b]<<",";
    }
    
    
}
int main()
{
    int a[9] = {-4,1,3,-2,6,2,-8,-9,4};
  
   max_sum_sub_array(a,9);
   

   return 0;

}