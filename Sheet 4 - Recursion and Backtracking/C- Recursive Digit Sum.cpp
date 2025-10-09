#include <iostream>
#include <string>
using namespace std;
string str;
long long calcStr(string s, int index)
{
    if(index == 0)
        return s[index] - '0';
    return (s[index] - '0') + calcStr(s, index-1);
}

long long calc(string s)
{
    if(s.size() == 1)
        return s[0] - '0';
    long long n = calcStr(s, s.size()-1);
    string st = to_string(n);
    return calc(st);
}

int main()
{
    cin >> str;
    int k;
    cin >> k;
    string s;
    for(int i = 0; i < k; i++)
    {
        s += str;
    }
    cout << calc(s) << endl;
}