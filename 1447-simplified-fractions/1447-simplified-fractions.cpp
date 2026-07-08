int gcd(int a, int b);

class Solution
{
public:
    vector <string> simplifiedFractions(int n)
    {
        if (n == 1)
        {
            return {};
        }

        vector <string> fracs;
        for (int i = 2; i <= n; i++)
        {
            for (int j = 1; j < i; j++)
            {
                if (gcd(i, j) == 1)
                {
                    string s = "";
                    s += to_string(j);
                    s += '/';
                    s += to_string(i);
                    fracs.push_back(s);
                }
            }
        }
        return fracs;
    }
};

int gcd(int a, int b)
{
    int small = a > b ? b : a;
    int big = a + b - small;
    if (small == 0)
    {
        return big;
    }
    return gcd(small, big - (big/small)*small);
}