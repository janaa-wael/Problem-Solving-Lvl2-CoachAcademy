#include <iostream>
#include <deque>
using namespace std;

int main()
{
    deque<int> deq;
    int n, d;
    cin >> n >> d;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        deq.push_back(x);
    }
    for(int i = 0 ; i < d; i++)
    {
        deq.push_back(deq.front());
        deq.pop_front();
    }
    for (int i = 0; i < n; i++)
    {
        cout << deq[i] << " ";
    }
}