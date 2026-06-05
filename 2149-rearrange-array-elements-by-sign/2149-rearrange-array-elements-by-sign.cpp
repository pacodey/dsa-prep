class Solution
{
public:
    vector <int> rearrangeArray(vector <int> &nums)
    {
        vector<int> ans(nums.size()); 
        
        int posidx = 0;
        int negidx = 1;

        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] > 0)
            {
                ans[posidx] = nums[i];
                posidx += 2;
            }
            else
            {
                ans[negidx] = nums[i];
                negidx += 2;
            }
        }
        return ans;
    }
};