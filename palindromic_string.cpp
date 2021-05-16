//#include<iostream>
//#include<cstring>
#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(char a[])
{
    int i = 0;
    int j = strlen(a) - 1;

    while (i<j)
    {
        if (a[i]==a[j])
        {
            i++;
            j--;
        }

        else
        {
            return false;
        }
        
        
    }
    return true;
    
}

int main()
{

    cout<<"ENTER THE STRING"<<endl;
    char a[1000];
    cin.getline(a,1000);
    
    if (isPalindrome(a))
    {
        cout<<"PALINDROMIC STRING"<<endl;
    }
    else
    {
        cout<<"NOT PALINDROMIC"<<endl;
    }
    
    return 0;
}