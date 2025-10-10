#include <iostream>

using namespace std;
int n;
int sum(int curr, int day)
{
    if(curr >= n)
        return day;
    return sum(curr+day, day+1);
}

int main()
{
    cin >> n;
    cout << sum(0, 0)-1 << endl;
}