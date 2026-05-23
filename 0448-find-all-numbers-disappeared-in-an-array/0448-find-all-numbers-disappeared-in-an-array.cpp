class Solution
{
public:
    vector <int> findDisappearedNumbers(vector <int> &nums)
    {
        int n = nums.size();
        vector <int> missing;
        unordered_set <int> present;
        
        for (int i = 1; i <= n; i++)
        {
            present.insert(nums[i - 1]);
        }
        for (int i = 1; i <= n; i++)
        {
            if (present.find(i) == present.end())
            {
                missing.push_back(i);
            }
        }
        return missing;
    }
};