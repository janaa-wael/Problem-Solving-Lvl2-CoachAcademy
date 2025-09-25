#include <iostream>
#include <set>
using namespace std;

int main()
{
    set <char> st;
    string s;
    cin >> s;
    for(int i=0; i < s.size(); i++)
    {
        st.insert(s[i]);
    }
    if(st.size()%2)
    {
        cout << "IGNORE HIM!" << endl;
    }
    else
    {
        cout << "CHAT WITH HER!" << endl;
    }
}