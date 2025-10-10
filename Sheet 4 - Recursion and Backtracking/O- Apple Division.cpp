#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int n;
vector <long long> v;


long long divide(int index, long long sum1, long long sum2)
{
    if(index == n)
    {
        return fabs(sum1-sum2);
    }
    
    //add to sum1 
    long long diff1 = divide(index+1, sum1+v[index], sum2);

    //add to sum2
    long long diff2 = divide(index+1, sum1, sum2+v[index]);

    return min(diff1, diff2);

}



int main()
{
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        long long y; 
        cin >> y;
        v.push_back(y);
    }
    cout << divide(0,0,0) << endl;
}