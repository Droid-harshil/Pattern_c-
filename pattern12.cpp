/*we have to make pattern
a b c
b c d 
c d e
so for printing 
1 2 3
2 3 4
3 4 5
we use (i+j-1)formula
so to map this with a lets derive new formula
i+j-1=1
i+j-1+a-1=1+a-1
i+j-2+a=a*/
#include<iostream>
using namespace std;
int main()
{
      int n;
    int i=1;
  
    cout<<" enter n value"<<endl;
    cin>>n;
    while(i<=n)
    {
        
        int j=1;
        while(j<=n)
        {
           
            cout<<char(i+j-2+'A')<<" ";
            
            j++;
        }
        cout<<endl;
        i++;
    }
}
