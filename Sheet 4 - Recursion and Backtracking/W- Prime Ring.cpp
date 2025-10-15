#include <iostream>
#include <vector>

using namespace std;

vector <int> v;
int n;

bool isPrime(int x)
{
    for(int i = 2; i <= x/2; i++)
    {
        if(x%i==0) return false;
    }
    return true;
}

int generateCircle(int index)
{
    

    //take next
    generateCircle(index+1);
    //leave next
    generateCircle(index+2)
}

int main()
{

    int counter = 1;
    while(cin >> n)
    {
        cout << "Case " << counter++ << ":\n";
    }
}