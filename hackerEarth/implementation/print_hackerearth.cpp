#include<iostream>
using namespace std;
int main()
{
    int n, freq[26] = {0}, counts[26] = {0};
    string x;
    cin>>n>>x;
    for(int i = 0; i < x.size(); i++)
    {
        freq[x[i] - 'a']++;
    }
    string s = "hackerearth";
    for(int i = 0; i < s.size(); i++)
    {
        counts[s[i] - 'a']++;
    }
    int result = 0, flag = 0;
    for(int j = 0; j < n && flag != 1; j++)
    {
        for(int i = 0; i < s.size() && flag != 1; i++)
        {
            if(freq[s[i]] < counts[s[i]])
            {
                flag = 1;
                break;
            }
            freq[s[i] - 'a']--;
        }
        if(flag == 1)
            break;
        result++;
    }
    
    cout<<result;
    // int result = 0;
    // for(int i = 0 ; i < s.size(); i++)
    // {
    //     if(freq[s[i] - 'a'] < counts[s[i] - 'a'])
    //         break;
    //     result++;
    //     freq[s[i] - 'a']--;
    // }
    // cout<<result;
    return 0;
}