#include <iostream>
#include <map>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        string str;
        cin >> str;
        map <char,int> mp;
        int counter = -1;
        int flag = 0;
        for(int i = 0 ; i < n; i++)
        {
            if(str[i] == 'A')
            {
                mp[++counter]=0;
                flag = 1;
            }
            else if(flag)
            {
                mp[counter]++;
            }
        }
        if(!flag) mp[counter]=0;
        int max = -1;
        auto it = mp.begin();
        while(it != mp.end())
        {
            if(max < it->second) max = it->second;
            it++;
        }
        cout << max << endl;
    }
}