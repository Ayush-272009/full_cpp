#include <bits/stdc++.h>
using namespace std;

void remove(char a[]){
    int len = strlen(a);

    if (len==0 or len==1)
    {
      return;
    }
    int prev = 0;
    for (int curr = 1; curr < len; curr++)
    {
        if (a[curr]!=a[prev])
        {
            prev++;
            a[prev]=a[curr];
        }

        /*else
        {
         prev=prev+1;
         a[prev]=a[curr];
        }*/
        
    }
    a[prev+1] = '\0';

    cout<<a<<endl;

}

int main()
{
    char a[100];
    cin.getline(a, 100);
    remove(a);
    return 0;
}