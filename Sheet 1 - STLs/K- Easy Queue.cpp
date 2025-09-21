#include <iostream>
#include <queue>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
            queue <int> q;
    while(t--)
    {
        int num;
        cin >> num;

        
        if(num == 1)
        {
            int c;
            cin >> c;
            q.push(c);
        }
        else if(num == 2)
        {
            if(!q.empty()) q.pop();
        }
        else if(num == 3)
        {
            if(q.empty()) cout << "Empty!" << endl;
            else cout << q.front() << endl;
        }

    }
}