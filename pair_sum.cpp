#include<iostream>
using namespace std;

int main(){
    int a[]={1,3,5,7,10,11,12,13};
    int i = 0;
    
    int k = 16;
    int j = (sizeof(a)/sizeof(int)) - 1;

    while (i<j)
    {
       int sum = a[i]+a[j];

        if (sum > k)
        {
            j--;
        }
        else if (sum < k)
        {
            i++;
        }
        else if (sum == k)
        {
         cout<<a[i]<<" SUM "<<a[j]<<"  "<<sum<<endl;
         i++;
         j--;
        }
        
    }
    
    return 0;
    
}