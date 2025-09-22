#include <iostream>
#include <stack>
using namespace std;

int main()
{
    int t;
    cin >> t;
    stack <string> st; 
    string s = "";
    st.push(s);
    while(t--)
    {
        int q;
        cin >> q;
        if(q==1)
        {
            string c;
            cin >> c;
            s += c;
            st.push(s);
        }
        else if(q==2)
        {
            int k;
            cin >> k;
            s = s.substr(0,s.size()-k);
            st.push(s);
        }
        else if(q==3)
        {
            int k; cin >> k;
            cout << s[k-1] << endl;
        }
        else if(q==4)
        {
            if(st.size() > 1)
            {
                st.pop();
                s = st.top();
            }
            
        }
        
    }
}