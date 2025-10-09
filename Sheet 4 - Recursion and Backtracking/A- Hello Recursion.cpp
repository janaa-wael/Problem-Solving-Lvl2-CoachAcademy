#include <iostream>
#include <vector>
using namespace std;

int sum(vector<int>&v, int index)
{
    if(index+1 == v.size())
    {
        return v[index];
    }
    return v[index] + sum(v,index+1);
}

int main()
{
    int t;
    cin >> t;
    for(int j = 0; j < t; j++)
    {
        vector <int> v;
        int n;
        cin >> n;
        for(int i=0;i<n;i++)
        {
            int x; cin >> x;
            v.push_back(x);
        }
        int result = sum(v,0);
        cout << "Case " << j+1 << ": " << result << endl;
    }
}