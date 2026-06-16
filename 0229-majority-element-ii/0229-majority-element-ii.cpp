class Solution
{
public:
    vector <int> majorityElement(vector <int> &nums)
    {
        sort(nums.begin(), nums.end());
        unordered_map <int, int> freq;
        for (int i = 0; i < nums.size(); i++)
        {
            freq[nums[i]]++;
        }
        vector <int> ans;
        for (auto it = freq.begin(); it != freq.end(); it++)
        {
            if ((*it).second > floor(nums.size()/3))
            {
                ans.push_back((*it).first);
            }
        }
        return ans;
    }
};