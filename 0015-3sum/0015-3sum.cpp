class Solution
{
public:
    vector <vector <int>> threeSum(vector <int> &nums)
    {
        sort(nums.begin(), nums.end());
        vector <vector <int>> ans;
        for (int i = 0; i < nums.size(); i++)
        {
            if (i > 0 and nums[i] == nums[i - 1])
            {
                continue;
            }
            if (nums[i] > 0)
            {
                break;
            }
            int left = i + 1;
            int right = nums.size() - 1;
            while (left < right)
            {
                if (nums[left] + nums[right] + nums[i] > 0)
                {
                    right--;
                }
                else if (nums[left] + nums[right] + nums[i] < 0)
                {
                    left++;
                }
                else
                {
                    ans.push_back({nums[i], nums[left], nums[right]});
                    left++;
                    while (nums[left] == nums[left - 1] and left < right)
                    {
                        left++;
                    }
                }
            }
        }
        return ans;
    }
};