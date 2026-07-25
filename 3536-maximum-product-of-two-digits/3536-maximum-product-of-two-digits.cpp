class Solution
{
public:
    int maxProduct(int n)
    {
        string num = to_string(n);
        sort(num.begin(), num.end());
        return (num[num.size() - 1] - 48)*(num[num.size() - 2] - 48);
    }
};