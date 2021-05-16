#include<iostream>
using namespace std;

void magical_park(char a[][10],int m,int n,int k,int s){

    bool success = true;

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; i < n; j++)
        {
            char ch = a[i][j];

            //check

            if (s<k)
            {
                success = false;
                break;
            }
            
            if (ch=='*'){
                s = s+5;

            }

             else if (ch=='.')
            {
             s = s-2;   
            }
            else
            {   break;
            }
            
            
            //we also loose 1 point when we move right 
            if (j!=n-1)
            {
                s--;
            }
            
            
        }
        
    }

    if (success)
    {
        cout<<"yes"<<endl;
        cout<<s<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    
    
}

int main()
{
    char b[10][10] = {{'.','.','*','.'},{'.','#','.','.'},{'*','*','.','.'},{'.','#','*','*'}};;
  // char ch[10][10];
    int m,n,k,s;
   
    cout<<"enter m  n k  s"<<endl;
   
    cin>>m>>n>>k>>s;

    cout<<"enter elements in an array"<<endl;

   // for (int i = 0; i < m; i++)
    //{
       // for (int j = 0; i < n; j++)
        //{
          //  cin>>ch[i][j];
        //}
        
    //}

    magical_park(b,m,n,k,s);

    return 0;
    
}