#include <iostream>

using namespace std;

int num, target;

int multiply(int curr, int moves)
{
    if(curr > target) return -1;
    else if(curr == target) return moves;
    //try 2
    int ans2= multiply(curr*2, moves+1);
    //try 3
    int ans3 = multiply(curr*3, moves+1);

    return max(ans2, ans3);
}

int main()
{
    cin >> num >> target;
    cout << multiply(num, 0);
}