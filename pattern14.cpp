#include<iostream>
using namespace std;
int main()
{
    cout<<" enter size of n"<<endl;
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        static char value='A';
        for(int j=1;j<=i;j++)
        {
            cout<<value<<" ";
            value++;
        }
    cout<<endl;
        
    }
}