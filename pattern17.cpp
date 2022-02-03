#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter n size"<<endl;
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        int spaces=n-i;
        while(spaces)
        {
            cout<<" ";
            spaces++;
        }
for(int j=1;j<=i;j++)
{
    cout<<"*"<<" ";
}
cout<<endl;
    }
}