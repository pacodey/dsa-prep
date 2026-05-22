class Solution
{
public:
    int removeDuplicates(vector<int>& nums)
    {
        set <int> s;
        for (int i = 0; i < nums.size(); i++)
        {
            s.insert(nums[i]);
        }
        int k = s.size();
        auto it = s.begin();
        for (int i = 0; i < s.size(); i++)
        {
            nums[i] = *it;
            it++;
        }
        // for (int i = k; i < nums.size(); i++)
        // {
        //     nums[i] = 0;
        // }
        return k;
    }
};