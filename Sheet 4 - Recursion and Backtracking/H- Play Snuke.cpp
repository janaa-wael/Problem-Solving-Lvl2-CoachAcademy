#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int min = INT_MAX;
    for(int i = 0 ; i < n ;i++)
    {
        int a,p,x;
        cin >> a >> p >> x;

        if(x > a)
        {
            if(min > p) min = p;
        }
    }
    if(min == INT_MAX) cout << -1 << endl;
    else
        cout << min << endl;
}