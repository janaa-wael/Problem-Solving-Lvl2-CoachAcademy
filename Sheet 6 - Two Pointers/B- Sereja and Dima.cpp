#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector <int> v;
    for(int i = 0 ; i < n; i++)
    {
        int x; cin >> x;
        v.push_back(x);
    }
    int i = 0, j = v.size()-1;
    int sereja = 0, dima = 0;
    int flag = 0;
    while(i <= j)
    {
        if(!flag)
        {
            if(v[i] > v[j])
            {
                sereja += v[i++];
            }
            else
            {
                sereja += v[j--];
            }
            flag = 1;
        }
        else
        {
            if(v[i] > v[j])
            {
                dima += v[i++];
            }
            else
            {
                dima += v[j--];
            }
            flag = 0;
        }
    } 
    cout << sereja << " " << dima << endl;
}