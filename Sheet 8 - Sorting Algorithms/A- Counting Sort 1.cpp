//
// Created by hp on 1/4/2026.
//
#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;


int main()
{
    vector<int>v;
    int n;
    cin >> n;
    while (n--) {
        int x;
        cin >> x; v.push_back(x);
    }
    int arr [101]={};
    for (auto c : v) {
        arr[c]++;
    }
    for (int i = 0; i < 100; i++) {
        cout << arr[i] << " ";
    }
}