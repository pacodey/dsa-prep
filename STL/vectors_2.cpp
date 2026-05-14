/*
https://www.geeksforgeeks.org/problems/front-to-back/1
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector <int> v;
    cout << "enter n: ";
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cout << "enter value: ";
        cin >> x;
        v.push_back(x);
    }

    vector <int> :: iterator it1 = v.begin();
    vector <int> :: iterator it2 = v.end();

    for (vector <int> :: iterator v1 = it1; v1 != it2; v1++)
    {
        cout << *v1 << " ";
    }
    cout << "\n";
}