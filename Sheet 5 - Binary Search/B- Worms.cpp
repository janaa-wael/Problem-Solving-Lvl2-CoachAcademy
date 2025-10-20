#include <iostream>
#include <vector>

using namespace std;

long long BinarySearch(vector <long long>& v, long long x)
{
    long long l = 0, r = v.size()-1, mid;
    long long ans = 0;
    while(l <= r)
    {
        mid = (l+r)/2;
        if(v[mid] >= x)
        {
            ans = mid;
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    return ans;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector <long long> a;
    
    vector <long long> prefix;
    prefix.push_back(0);

    for(int i = 0 ; i < n; i++)
    {
        int x; cin >> x;
        a.push_back(x);
        prefix.push_back(x + prefix[i]);
    }

    int m;
    cin >> m;

    vector <long long> q;
    for(int i = 0; i < m; i++)
    {
        int x; cin >> x;
        cout << BinarySearch(prefix, x) << endl;
    }

}