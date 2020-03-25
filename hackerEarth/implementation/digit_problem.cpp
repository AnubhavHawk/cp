#include<iostream>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int k;
    cin>>k;
    for(int i = 0; i < s.length() && k > 0; i++)
    {
        if(s[i] != '9')
        {
            s[i] = '9';
            k--;
        }
    }
    cout<<s<<endl;
    return 0;
}
