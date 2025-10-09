#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, k, q;
    cin >> n >> k >> q;
    int freq[200002]= {};
    vector <int> admissible(200002,0);
    while(n--)
    {
        int l,r;
        cin >> l >> r;
        freq[l] += 1;
        freq[r+1] -= 1;
    }
    for(int i = 1; i <= 200000; i++)
    {
        freq[i] += freq[i-1];
    }
    for(int i = 0 ; i < 200001;i++)
    {
        admissible[i] = (freq[i] >= k) ? 1:0;
    }

    for(int i = 1; i <= 200000; i++)
    {
        admissible[i] += admissible[i-1];
    }

    while(q--)
    {
        int a,b;
        cin >> a >> b;
        cout << admissible[b] - admissible[a-1] << endl;
    }
}