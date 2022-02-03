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
            cout<<char('A'+i-1)<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }
}
