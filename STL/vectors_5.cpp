/*
https://www.geeksforgeeks.org/problems/maximum-among-left/1
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector <int> v;
    int n;
    cout << "enter n: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cout << "enter number: ";
        cin >> x;
        v.push_back(x);
    }
    
    int maxval = v[0];
    vector <int> maxes;
    maxes.push_back(0);
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] > maxval)
        {
            maxval = v[i];
            maxes.push_back(i);
        }
    }
    for (int i = 0; i < maxes.size(); i++)
    {
        cout << maxes[i] << " ";
    }
}
