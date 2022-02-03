#include<iostream>
using namespace std;
int main()
{
    cout<<" enter size of n"<<endl;
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        
        for(int j=1;j<=i;j++)
        {
            cout<<char('A'+i+j-2)<<" ";//this formula is derived already
            
        }
    cout<<endl;
        
    }
}