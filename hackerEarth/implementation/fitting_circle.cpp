#include<iostream>
using namespace std;
int main()
{
    int t, a, b;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        int count;
        if(a > b)
            count = a / b;
        else
            count = b / a;
        cout<<count<<endl;
    }
    return 0;
}