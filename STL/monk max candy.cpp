/*
https://www.hackerearth.com/practice/data-structures/trees/heapspriority-queues/practice-problems/algorithm/monk-and-the-magical-candy-bags/
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int t;
    cout << "enter number of bags (n): ";
    cin >> n;
    cout << "enter amount of time (t): ";
    cin >> t;
    vector <int> qty;
    for (int i = 0; i < n; i++)
    {
        int x;
        cout << "enter number of candies in bag " << i+1 << ": ";
        cin >> x;
        qty.push_back(x);
    }
    
    int eat = 0;
    for (int i = 0; i < t; i++)
    {
        auto maxit = max_element(qty.begin(), qty.end());
        eat += *maxit;
        *maxit /= 2;
        
    }
    cout << eat;
}
