#include <iostream>
#include <vector>
using namespace std;

int t;
vector <int> A;
vector <int> B;

int dotProd(int index)
{
    if(index+1 == t) 
        return A[index]*B[index];  
    return A[index]*B[index] + dotProd(index+1);
}


int main()
{

    cin >> t;

    for(int i = 0 ; i < t; i++)
    {
        int x;
        cin >> x;
        A.push_back(x);
    }
    for(int i = 0 ; i < t; i++)
    {
        int x;
        cin >> x;
        B.push_back(x);
    }

    if(dotProd(0) == 0) cout << "Yes" << endl;
    else cout << "No" << endl;
}