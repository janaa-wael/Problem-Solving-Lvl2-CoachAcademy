#include <iostream>
#include <vector>

using namespace std;


int n,p;

bool canSolder(vector <int>&v, int index, int sum)
{
    if(sum == n) return true;
    else if(sum > n || index >= p) return false;

    //take it 
    bool r1 = canSolder(v, index+1, sum+v[index]);
    //leave it
    bool r2 = canSolder(v, index+1, sum);
    return r1 || r2;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        cin >> n >> p;
        vector<int>v;
        for(int i = 0 ; i < p; i++)
        {
            int x; cin >> x;
            v.push_back(x);
        }
        if(canSolder(v,0,0)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}