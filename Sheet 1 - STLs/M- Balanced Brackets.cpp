#include <iostream>
#include <stack>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        stack<char> st;
        string s;
        cin >> s;
        string answer;
        for(int i = 0 ; i < s.length(); i++)
        {
            if(s[i] == '(' || s[i] == '{' || s[i] == '[')
                st.push(s[i]);
            else if(s[i] == ')')
            {
                if (st.empty() || st.top() != '(')
                {
                    answer = "NO";
                    break;
                }
                st.pop();
            }
            else if(s[i] == ']')
            {
                if (st.empty() || st.top() != '[')
                {
                    answer = "NO";
                    break;
                }
                st.pop();
            }
            else if(s[i] == '}')
            {
                if (st.empty() || st.top() != '{')
                {
                    answer = "NO";
                    break;
                }
                st.pop();
            }
        }
        if(answer.empty() && st.empty()) 
            answer = "YES";
        else if(answer.empty()) 
            answer = "NO";

        cout << answer << endl;
    }
}
