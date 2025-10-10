#include <iostream>
#include <vector>
using namespace std;
int x;
vector<int> result;
vector <int> v;

void remove(int ind)
{
    if(ind == v.size()) return;
    if(v[ind] == x) remove(ind+1);
    else 
    {
        result.push_back(v[ind]);
        remove(ind+1);
    }
}

int main()
{
    int n;
    cin >> n >> x;
    for(int i = 0 ; i < n; i++)
    {
        int x; cin >> x;
        v.push_back(x);
    }
    remove(0);
    for(auto c:result)
        cout << c << " ";
}