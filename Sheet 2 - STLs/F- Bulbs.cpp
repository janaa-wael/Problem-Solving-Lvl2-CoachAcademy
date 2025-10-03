#include <iostream>
#include <set>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    set <int> st;
    while(n--)
    {
        int num;
        cin >> num;
        while(num--)
        {
            int x;
            cin >> x;
            st.insert(x);
        }
    }
    if(st.size() == m) cout << "YES" << endl;
    else cout << "NO" << endl;
}