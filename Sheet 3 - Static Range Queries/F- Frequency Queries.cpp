#include <iostream>
#include <map>
using namespace std;

int main()
{
    int q;
    cin >> q;
    map <int,int> mp;
    map <int,int> freq;
    while(q--)
    {
        int a,b;
        cin >> a >> b;
        if(a == 1)
        {
            freq[mp[b]]--;
            mp[b]++;
            freq[mp[b]]++;
        }
        else if(a == 2)
        {
            if(mp[b] > 0)
            {
                freq[mp[b]]--;
                mp[b]--;
                freq[mp[b]]++;
            } 
        }
        else if(a == 3)
        {
            if(freq[b] > 0) cout << 1 << endl;
            else cout << 0 << endl;
        }
    }
}