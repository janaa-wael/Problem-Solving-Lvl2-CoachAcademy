#include <iostream>

using namespace std;

int main()
{
    long long n,s,d;
    int flag = 0;
    cin >> n >> s >> d;
    for(int i = 0 ; i < n ; i++)
    {
        long long x,y;
        cin >> x >> y;
        if(x < s && y > d) flag = 1;

    }
    if(flag) cout << "Yes" << endl;
    else cout << "No" << endl;
}