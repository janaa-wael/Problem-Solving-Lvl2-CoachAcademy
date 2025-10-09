#include <iostream>

using namespace std;

int divCrates(int n, int k)
{
    if(n <= k) return 1;

    return divCrates(n/2,k) + divCrates(n-n/2,k);

}

int main()
{
    int numCrates, loadSize;
    while(cin >> numCrates >> loadSize)
    {
        cout << divCrates(numCrates, loadSize) << endl;
    }
}