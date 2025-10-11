#include <iostream>
#include <vector>

using namespace std;

long long remaining(long long x, long long y)
{
    if(x==y) return x+y;
    else if(x==0 || y == 0) return x+y;

    if(x > y)
    {
        long long r = x % y;
        if (r == 0) return 2 * y; 
        return remaining(r, y);
    }
    else 
    {
        long long r = y % x;
        if (r == 0) return 2 * x; 
        return remaining(x, r);
    }
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long x,y;
        cin >> x >> y;
        cout << remaining(x,y) << endl;
    }
}