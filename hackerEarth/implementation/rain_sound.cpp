#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int l, r, s;
        cin>>l>>r>>s;
        int low = (l - 1)/s + 1;
        int high = r / s;
        if(low > high)
            cout<<"-1 -1"<<endl;
        else
            cout<<low<<" "<<high<<endl;
    }
    return 0;
}