#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

vector <long long> Lucky;

void generate(long long num)
{
    if(num > 1e10)
    {
        return;
    }
    if(num != 0)
        Lucky.push_back(num);
    generate(num*10+4);
    generate(num*10+7);

}


int main()
{
    long long l,r;
    cin >> l >> r;
    generate(0);
    sort(Lucky.begin(), Lucky.end());
    
    long long res = 0;
    long long counter = 0;
    long long curr;
    for(int i = l; i <= r;)
    {
        while(i > Lucky[counter])
        {
            counter++;
        }
        int x = min(r,Lucky[counter]);
        int range = x - i+1;
        res += (range)*Lucky[counter];
        i += range;
    }
    cout << res << endl;
}