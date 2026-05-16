#include <bits/stdc++.h>
using namespace std;

int main()
{
    map <string, int> m;
    int n;
    cout << "enter n: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string s;
        cout << "enter string: ";
        cin >> s;
        m[s]++;
    }
    
    for (auto p: m)
    {
        cout << p.first << " " << p.second << "\n";
    }
}
