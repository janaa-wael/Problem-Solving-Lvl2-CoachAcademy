#include <iostream>

using namespace std;

string res = "";

void round(string& s, int ind)
{
    if(ind == s.size() || s[ind] == '.') return;
    res += s[ind];
    round(s, ind+1);
}

int main()
{
    string s;
    cin >> s;
    round(s, 0);
    cout << res << endl;
}