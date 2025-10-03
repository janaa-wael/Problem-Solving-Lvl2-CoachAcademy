#include <iostream>
#include <map>
using namespace std;

string s = "qwertyuiopasdfghjkl;zxcvbnm,./";

int main()
{
    char dir;
    cin >> dir;
    string input;
    cin >> input;
    map <char,char> mp;

        if(dir == 'L')
        {
            for(int i = 0 ; i < s.length(); i++)
            {
                mp[s[i]] = s[i+1];
            }
            for(int i = 0 ; i < input.length(); i++)
            {
                cout << mp[input[i]];
            }
        }
        else
        {
            for(int i = 0 ; i < s.length(); i++)
            {
                mp[s[i]] = s[i-1];
            }

            for(int i = 0 ; i < input.length(); i++)
            {
                cout << mp[input[i]];
            }
        }
    
}