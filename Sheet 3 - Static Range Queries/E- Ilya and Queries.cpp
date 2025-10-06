#include <iostream>
#include <vector>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int n;
    cin >> n;
    vector <int> v(s.size());
    for(int i = 0; i < s.size()-1; i++)
    {
        if(s[i] == s[i+1])
        {
            v[i] = 1;
        }
        else
        {
            v[i] = 0;
        }
    }
    vector <int> prefix_sum(s.size());
    for(int i = 0; i < s.size(); i++)
    {
        if(!i) prefix_sum[i] = v[i];
        else prefix_sum[i] = v[i] + prefix_sum[i-1];
    }
    while(n--)
    {
        int l,r;
        cin >> l >> r;
        l--;
        r--;
        if(l==0)
        {
            cout << prefix_sum[r-1] << endl;
        }
        else
        {
            cout << prefix_sum[r-1]- prefix_sum[l-1] << endl;
        }
    }
}