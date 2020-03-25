#include<iostream>
using namespace std;
int main()
{
    int n, a;
    cin>>n;
    if((n&&!(n&(n-1)))==1)
	{
		cout<<1;
	}
    else
    {
        int count = 0;
        while(n > 0)
        {
            if(!(n&1))
            {
                n = n>>1; // divide by two
            }
            else
            {
                n -= 1;
                count++;
            }
        }
        cout<<count;
    }
    return 0;
}