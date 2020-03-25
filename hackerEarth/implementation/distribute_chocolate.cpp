#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        float c, n;
        cin>>c>>n;
        int k = 1;
        int sum = (n/2)*((2*k) + n - 1), diff;
        if(sum > c)
            cout<<c<<endl;
        else
        {
            while(c - sum >= n)
            {
                k++;
                sum = sum + n;
                diff = c - sum;
            }
            cout<<diff<<endl;
        }
    }
    return 0;
}