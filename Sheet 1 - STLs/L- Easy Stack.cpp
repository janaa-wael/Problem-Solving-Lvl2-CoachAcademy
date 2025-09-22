#include <iostream>
#include <stack>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    scanf("%d", &t);
    stack<int> st;
    while (t--)
    {
        int c;
        scanf("%d", &c);
        if (c == 1)
        {
            int n;
            scanf("%d", &n);
            st.push(n);
        }
        else if (c == 2)
        {
            if (!st.empty()) st.pop();
        }
        else if (c == 3)
        {
            if (st.empty()) printf("Empty!\n");
            else printf("%d\n", st.top());
        }
    }
}
