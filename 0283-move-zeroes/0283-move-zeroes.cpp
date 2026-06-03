class Solution
{
public:
    void moveZeroes(vector <int> &nums)
    {
        queue <int> q;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] != 0)
            {
                q.push(nums[i]);
            }
        }
        int n = q.size();
        for (int i = 0; i < n; i++)
        {
            nums[i] = q.front();
            q.pop();
        }
        for (int i = n; i < nums.size(); i++)
        {
            nums[i] = 0;
        }
    }
};