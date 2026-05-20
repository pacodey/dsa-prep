/*
https://www.geeksforgeeks.org/problems/count-smaller-elements2214/1
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector <pair <int, int>> arr;
    int n;
    cout << "enter n: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cout << "enter number: ";
        cin >> x;
        arr.push_back({x, 0});
    }
    
    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = n - 1; j > i; j--)
        {
            if (arr[i] > arr[j])
            {
                arr[i].second++;
            }
        }
    }
    
    for (int i = 0; i < n; i++)
    {
        cout << arr[i].first << " " << arr[i].second << "\n";
    }
}
