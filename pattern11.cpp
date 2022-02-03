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
        static char start='A';
        int j=1;
        while(j<=n)
        {
           
            cout<<start<<" ";
            start++;
            j++;
        }
        cout<<endl;
        i++;
    }
}
