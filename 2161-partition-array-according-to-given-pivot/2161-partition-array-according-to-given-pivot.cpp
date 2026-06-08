class Solution
{
public:
    vector <int> pivotArray(vector <int> &nums, int pivot)
    {
        stack <int> small;
        stack <int> big;
        for (int i = nums.size() - 1; i >= 0; i--)
        {
            if (nums[i] > pivot)
            {
                big.push(nums[i]);
            }
        }
        for (int i = nums.size() - 1; i >= 0; i--)
        {
            if (nums[i] < pivot)
            {
                small.push(nums[i]);
            }
        }
        int smallsize = small.size();
        for (int i = 0; i < smallsize; i++)
        {
            nums[i] = small.top();
            small.pop();
        }
        for (int i = smallsize; i < nums.size() - big.size(); i++)
        {
            nums[i] = pivot;
        }
        int bigsize = big.size();
        for (int i = nums.size() - bigsize; i < nums.size(); i++)
        {
            nums[i] = big.top();
            big.pop();
        }
        return nums;
    }
};