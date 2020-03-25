#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int s, x, n;
    cin>>s>>x>>n;
    int ex[100000] = {0};
    for(int i = 0; i < n; i++)
    {
        int t;
        cin>>t>>ex[t];
    }
    int days = 0;
    while(s > 0)
    {
        s = s - ((ex[days]>0)?ex[days]:x);
        days++;
    }
    cout<<days<<endl;
    return 0;
}