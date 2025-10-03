#include <iostream>
#include <map>
using namespace std;

int main()
{
    int p;
    cin >> p;
    while(p--)
    {
        string s1;
        string s2;
        map <char,int> mp;
        cin >> s1 >> s2;
        string res = "NO";
        for(auto c : s1)
        {
            if(mp[c] == 1) continue;
            mp[c]++;
        }
        for(auto c : s2)
        {
            if(mp[c] >= 1) 
            {
                mp[c]++;
                res = "YES";
                break;  
            }
        }
        cout << res << endl;
    }
}