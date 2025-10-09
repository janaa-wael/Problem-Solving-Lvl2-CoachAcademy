#include <iostream>

using namespace std;

string s;

bool isUpper(char c)
{
    return c < 'a' && c >= 'A';
}

bool isLower(char c)
{
    return c >= 'a';
}

bool isHard(int ind)
{
    if(ind ==s.size()) return true;
    if((ind)%2 == 0)
    {
        if(isLower(s[ind]) == true)
        {
            return true && isHard(ind+1);
        }
        return false;
    }
    else
    {
        if(isUpper(s[ind]) == true)
        {
            return true && isHard(ind+1);
        }
        return false;
    }

}

int main()
{

    cin >> s;
    if(isHard(0)) cout << "Yes" << endl;
    else cout << "No" << endl;

}