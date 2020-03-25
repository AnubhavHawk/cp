#include<iostream>
using namespace std;
int main()
{
    int t, n;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cin>>s;
        // cout<<n;
        int count = 0;
        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] == '0')
                count++;
        }
        cout<<count<<endl;
        // while(n)
        // {
        //     if(!(n&1))
        //         count++;
        //     n = n>>1;
        // }
        // cout<<count<<endl;
    }
    return 0;
}
