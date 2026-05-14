/*
https://www.geeksforgeeks.org/problems/vector-insertion/1
*/

#include <bits/stdc++.h>
using namespace std;

vector<int> fillVector(int arr[], int n)
{
    vector <int> v;
    for (int i = 0; i < n; i++)
    {
        v.push_back(arr[i]);
    }
    
    return v;
}

int main()
{
    int arr[5] = {23, 4, 2, 12, 8};
    vector <int> v = fillVector(arr, 5);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    cout << "\n";
}