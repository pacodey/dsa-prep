class Solution
{
public:
    int singleNumber(vector <int> &nums)
    {
        sort(nums.begin(), nums.end());
        stack <int> s;
        auto even = nums.begin();
        auto odd = ++nums.begin();
        while (odd != nums.end())
        {
            if (*even != *odd)
            {
                return *even;
            }
            odd +=2;
            even += 2;
        }
        return *(--nums.end());
    }
};