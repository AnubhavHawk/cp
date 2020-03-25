#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n, q;
    cin>>n>>q;
    vector <int> a(n+1);
    for(int i = 0; i < n; i++)
        cin>>a[i];
    for(int i = 0; i < q; i++)
    {
        int t, x, y;
        cin>>t>>x>>y;
        if(t == 1)
        {
            a[x] = y;
        }
        else
        {
            if(x > y)
            {
                cout<<-1<<endl;
                continue;
            }
            int sum = 0;
            for(int i = x; i <= y; i++)
                sum += a[i];
            cout<<sum<<endl; 
        }
    }
    return 0;
}