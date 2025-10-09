#include <iostream>
#include <vector>
using namespace std;



vector<int> v;

int fib(int index)
{
    if(index==0)
        return 0;
    else if(index==1)
        return 1;
    return fib(index-1) + fib(index-2);
    
}

int main()
{
    int n;
    cin >> n;
    cout << fib(n) << endl;
}