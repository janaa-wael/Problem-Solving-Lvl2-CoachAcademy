#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

string s;
vector <string> v;

int getPermutation(string s)
{
    if(next_permutation(s.begin(), s.end())==0) return 0;
    v.push_back(s);
    return 1 + getPermutation(s);
}


int main()
{
    cin >> s;
    sort(s.begin(), s.end());
    v.push_back(s);
    int num = getPermutation(s);
    cout << num+1 << endl;
    for(auto str : v)
    {
        cout << str << endl;
    }

}