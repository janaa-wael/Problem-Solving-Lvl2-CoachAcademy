#include <iostream>
#include <stack>
using namespace std;

int main()
{
    int n;
    int result=0;
    cin >> n;
    stack <int> steps;
    stack <int> steps_result;
    int last_popped = 0;
    for(int i = 0 ; i <n; i++)
    {
        int input;
        cin >> input;
        if(input == 1) result++;
        steps.push(input);
    }
    for(int i = 0 ;  i < n; i++)
    {
        if(i==0)
        {
            steps_result.push(steps.top());
            steps.pop();
            last_popped = steps_result.top();
        }
        else
        {
            if(last_popped == 1)
            {
                steps_result.push(steps.top()); 
            }
            last_popped = steps.top();
            steps.pop();
        }
    }
    cout << result << endl;
    while(steps_result.empty() != 1)
    {
        cout << steps_result.top() << " ";
        steps_result.pop();
    }
}