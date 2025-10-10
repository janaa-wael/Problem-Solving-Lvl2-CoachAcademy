#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector <int> Lucky;

void generateLucky(long long num)
{

    if(num > 1e9) return;

    if(num>0)
        Lucky.push_back(num);
    generateLucky(num*10+4);
    generateLucky(num*10+7);
    return;
}

int main()
{
    int n; 
    cin >> n;

    generateLucky(0);
    sort(Lucky.begin(), Lucky.end());
    for(int i = 0 ; i < Lucky.size(); i++)
    {
        if(n == Lucky[i])
        {
            cout << i+1 << endl;
            break;
        }
    }
}