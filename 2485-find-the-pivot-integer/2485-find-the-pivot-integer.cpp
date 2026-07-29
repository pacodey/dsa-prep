class Solution
{
public:
    int pivotInteger(int n)
    {
        int t = n*(n + 1)/2;
        int x = sqrt(t);
        return (x*x == t) ? x : -1;
    }
};