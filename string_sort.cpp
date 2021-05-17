#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

bool compare(string a, string b){

    //length wise sorting 
    return a.length() < b.length();
}

int main(){

    int n;
    cin>>n;

    //to clear the buffer we will use this
    cin.get();

    string s[100];
    for (int i = 0; i < n; i++)
    {
        //for string we will use get line
        getline(cin,s[i]);
    }

    //sort() it sorts lexicographically

    sort(s,s+n,compare);
    
    for (int i = 0; i < n; i++)
    {
        cout<<s[i]<<endl;
    }
    
    return 0;

}