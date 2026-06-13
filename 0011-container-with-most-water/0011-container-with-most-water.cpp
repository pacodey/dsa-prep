class Solution
{
public:
    int maxArea(vector <int> &height)
    {
        int left = 0;
        int right = height.size() - 1;
        int maxvol = (right - left) * min(height[left], height[right]);
        while (left != right)
        {
            if (height[left] < height[right])
            {
                left++;
            }
            else
            {
                right--;
            }
            maxvol = max(maxvol, (right - left) * min(height[left], height[right]));
        }
        return maxvol;
    }
};