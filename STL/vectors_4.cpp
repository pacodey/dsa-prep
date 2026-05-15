/*
https://www.geeksforgeeks.org/problems/sort-and-reverse-vector/1
*/

#include <bits/stdc++.h>
using namespace std;

void sortvec(vector <int> &v)
{
    for (int i = 0 ; i < v.size(); i++)
    {
        for (int j = 0; j < v.size() - i - 1; j++)
        {
            if (v[j] > v[j + 1])
            {
                int temp = v[j];
                v[j] = v[j + 1];
                v[j + 1] = temp;
            }
        }
    }
}

void reversevec(vector <int> &v)
{
    for (int i = 0; i < v.size()/2; i++)
    {
        int temp = v[i];
        v[i] = v[v.size() - i - 1];
        v[v.size() - i - 1] = temp;
    }
}

int main ()
{
    int n;
    cout << "enter n: ";
    cin >> n;
    vector <int> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cout << "enter number: ";
        cin >> x;
        v.push_back(x);
    }

    sortvec(v);
    reversevec(v);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << "\n";
}