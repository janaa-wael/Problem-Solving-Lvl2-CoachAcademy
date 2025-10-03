#include <iostream>
#include <map>
#include <string>
using namespace std;

int main()
{
    int n;
    cin >> n;
    map <string, int> mp;
    while(n--)
    {
        string s;
        cin >> s;
        mp[s]++;
        if(mp[s] > 1)
        {
            cout << s << mp[s]-1<< endl;
        }
        else
        {
            cout << "OK" << endl;
        }
    }
}