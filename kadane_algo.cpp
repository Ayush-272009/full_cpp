#include <iostream>
using namespace std;
int cs =0;
int ms=0;
int s =0;
int start=0;
int e =0;
void sum(int a[],int n){

    for (int i = 0; i < n; i++)
    {
        cs=cs+a[i];
        if (cs<0)
        {
            cs=0;
            //s=i+1;
        }
        ms=max(cs,ms);
        //e=i;
        //start=s;
    }
    cout<<"MAX SUM IS "<<ms<<endl;
   // cout<<"START  IS "<<start<<endl;
    //cout<<"END  IS "<<e<<endl;
    
}

int main(){
    int a[1000];
    int n=0;
    cout<<"enter size"<<endl;
    cin>>n;

    cout<<"enter elements"<<endl;
    

    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }

    sum(a,n);
    

}