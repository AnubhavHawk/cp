// 8
// 1 4 1 2 3 5 2 3 
// 2 28
#include<iostream>
using namespace std;
int min_cost_jump(int *a, int n, int k, int x)
{
    int cost = 0, j, flag = 0;
    for(int i = 0; i < n-k; )
    {
        if(a[i] == a[i+k])
            i = i+k;
        else
        {
            for(j = i+k; j > i; j--)
            {
                
                if(a[i] == a[j])
                {
                    i = j;
                    flag = 1;
                    break;
                }
            }
            if(flag != 1)
            {
                i = i+k;
                flag = 0;
                cost += x;
            }
            
        }
            
    }
    return cost+x;
}
int main()
{
    int n, a[30000], k, x;
    cin>>n;
    for(int i = 0; i < n; i++) 
        cin>>a[i];
    cin>>k>>x;
    cout<<min_cost_jump(a, n, k, x);
    return 0;
}