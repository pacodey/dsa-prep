/*
https://www.geeksforgeeks.org/problems/sort-vector-of-pairs/1
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector <pair <int, int>> v;
    int n;
    cout << "enter n: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int age, height;
        cout << "enter age:    ";
        cin >> age;
        cout << "enter height: ";
        cin >> height;
        v.push_back({age, height});
    }
    
    for (int i = 0; i < v.size(); i++)
    {
        for (int j = 0; j < v.size(); j++)
        {
            if (v[j].second < v[j + 1].second)
            {
                int temp = v[j].second;
                v[j].second = v[j + 1].second;
                v[j + 1].second = temp;
                temp = v[j].first;
                v[j].first = v[j + 1].first;
                v[j + 1].first = temp;
            }
            else if (v[j].second == v[j + 1].second)
            {
                if (v[j].first < v[j + 1].first)
                {
                    int temp = v[j].first;
                    v[j].first = v[j + 1].first;
                    v[j + 1].first = temp;
                }
            }
        }
    }
    
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i].first << " " << v[i].second << "\n";
    }
}
