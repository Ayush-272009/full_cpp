#include <iostream>
using namespace std;
  
int main()
{
    char name[100];
    cin.getline(name, 100,'$');
    
   // cin.get(name,100);
    cout << name;
    return 0;
}