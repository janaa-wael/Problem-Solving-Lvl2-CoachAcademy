#include <iostream>
#include <set>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    set <char> st;
    for(auto i : s)
    {
        if(i != '{' && i != '}' && i != ',' && i != ' ')
        {
            st.insert(i);
        }
    }
    cout << st.size() << endl;

}