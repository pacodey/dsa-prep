class Solution
{
public:
    vector <int> leftRightDifference(vector <int> &nums)
    {
        vector <int> lsum;
        vector <int> rsum;
        vector <int> ans;
        int ls = 0;
        int rs = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            lsum.push_back(ls);
            ls += nums[i];
        }
        for (int i = nums.size() - 1; i >= 0; i--)
        {
            rsum.push_back(rs);
            rs += nums[i];
        }
        reverse(rsum.begin(), rsum.end());
        for (int i = 0; i < nums.size(); i++)
        {
            ans.push_back(lsum[i] > rsum[i] ? (lsum[i] - rsum[i]) : (rsum[i] - lsum[i]));
        }
        return ans;
    }
};