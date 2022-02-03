#include<iostream>
using namespace std;
int main()
{
    cout<<" enter size of n"<<endl;
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        char c='A'+n-i;
        
        for(int j=1;j<=i;j++)
        {
            cout<<c<<" ";//      we have to print (d cd bcd abcd)so derive formula
            c++;
        }
    cout<<endl;
        
    }
}