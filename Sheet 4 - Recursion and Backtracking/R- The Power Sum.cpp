#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

vector <int> p;
int n,x;

int intPow(int base, int exp) 
{
    int res = 1;
    for (int i = 0; i < exp; i++) res *= base;
    return res;
}

void generate(int curr)
{
    if(intPow(curr,n) > x) return;
    
    p.push_back(pow(curr,n));
    generate(curr+1);

}

int powerSum(int curr, int index)
{
    if(curr == x) return 1;
    if(index >= p.size() || curr + p[index] > x) return 0;
    
    //take the element
    int z = powerSum(curr+p[index], index+1);

    //leave the element
    int y = powerSum(curr, index+1);

    return y+z;
}

int main()
{
    cin >> x >> n;
    generate(1);
    cout << powerSum(0,0);
}