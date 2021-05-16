#include <bits/stdc++.h>
using namespace std;

int main(){
     int n;
     char a[1000];
     cin>>n;
     char largest[1000];
     int len = 0;
     int max_len = 0;
     cin.get();


     for (int i = 0; i < n; i++)
     {
        cin.getline(a,1000);
        len = strlen(a);
        //cout<<len<<endl;
        if (len>max_len)
        {
            max_len = len;
            strcpy(largest,a);
        }
        
     }

     cout<<"largest is "<<largest<<"   size is  "<<max_len<<endl;

     return 0;
     
}