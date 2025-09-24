#include <iostream>
#include <queue>

using namespace std;

int main()
{
    int n;
    cin >> n;
    priority_queue <int, vector <int>, greater<int>> pq;
    long long int sum = 0;

    for(int i = 0 ; i < n ; i++)
    {
        int a;
        cin >> a;
        pq.push(a);
        sum += a;
        if(sum < 0)
        {
            sum -= pq.top();
            pq.pop();
 
        }
    }
    
    cout << pq.size() << endl;

}