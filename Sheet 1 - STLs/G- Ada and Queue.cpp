#include <iostream>
#include <deque>
using namespace std;

int main()
{
    int q;
    cin >> q;
    deque <int> dq; 
    int reversed = 0;
    while(q--)
    {
        string query;
        cin >> query;
        if((query == "back" && !reversed) || (query == "front" && reversed))
        {
            if(dq.empty())
            {
                cout << "No job for Ada?" << endl;
            }
            else
            {
                cout << dq.back() << endl;
                dq.pop_back();
            }
        }
        else if((query == "front" && !reversed) || (query == "back" && reversed))
        {
            if(dq.empty())
            {
                cout << "No job for Ada?" << endl;
            }
            else
            {
                cout << dq.front() << endl;
                dq.pop_front();
            }
        }
        else if(query == "reverse")
        {
            reversed = !reversed;
        }
        else if(query == "push_back")
        {
            int c;
            cin >> c;
            if(reversed)
            {
                dq.push_front(c);
            }
            else
                dq.push_back(c);
        }
        else if(query == "toFront")
        {
            int c;
            cin >> c;
            if(!reversed)
            {
                dq.push_front(c);
            }
            else
                dq.push_back(c);
        }
    }
}