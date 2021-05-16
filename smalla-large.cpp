#include<iostream>
#include<climits>

using namespace std;
int i;
int a[5]={10,20,30,40,50};
int largest=INT_MIN;
int smallest=INT_MAX;

int main(){
for (i = 0;i < 5; i++){
    //largest
    if(a[i]>largest)
    {
        largest=a[i];
    }

    //smallest
    
    if(a[i]<smallest)
    {
        smallest=a[i];
    }
}


cout << "largest is " << largest<<endl;
cout << "smallest is " << smallest<<endl;

return 0;
}