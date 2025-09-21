#include <iostream>
#include <deque>

using namespace std;

int main()
{
    int n,m;
    cin >> n >> m;
    deque <int> dq;
    deque <int>index;
    for(int i = 0; i < n; i++)
    {
        int input;
        cin >> input;
        dq.push_back(input);
        index.push_back(i);
    }
    while(dq.size() != 1)
    {
        if(dq.front() <= m)
        {
            dq.pop_front();
            index.pop_front();
        }
        else
        {
            dq.push_back(dq.front() - m);
            index.push_back(index.front());
            dq.pop_front();
            index.pop_front();
        }

    }
    cout << index.front() + 1 << endl;
}