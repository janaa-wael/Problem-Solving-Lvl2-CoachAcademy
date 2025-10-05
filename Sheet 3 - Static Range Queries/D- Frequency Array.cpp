#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n; cin >> n;
        vector <int> v;
        vector <int> freq(100000);
        for(int i = 0; i < n; i++)
        {
            int x; cin >> x; 
            v.push_back(x);
            freq[x]++;
        }
        sort(freq.rbegin(), freq.rend());
        if(freq[0] == 1) cout << "prekrasnyy" << endl;
        else cout << "ne krasivo" << endl;
    }
}