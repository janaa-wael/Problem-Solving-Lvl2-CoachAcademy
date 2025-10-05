#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector <int> v;
    vector <int> prefix_sum(n);
    for(int i = 0 ;  i < n ; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);

        if(!i)
            prefix_sum[i] = x;
        else    
            prefix_sum[i] = x + prefix_sum[i-1];
        
    }
    int q; cin >> q;
    for(int c = 0 ; c < q; c++)
    {
        int i,j;
        cin >> i >> j;
        if(i==0) cout << prefix_sum[j] << endl;
        else
        cout << prefix_sum[j] - prefix_sum[i-1] << endl; 
    }
}