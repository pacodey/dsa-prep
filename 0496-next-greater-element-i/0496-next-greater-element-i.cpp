class Solution
{
public:
    vector <int> nextGreaterElement(vector <int> &nums1, vector <int> &nums2)
    {
        stack <int> s;
        unordered_map <int, int> ng;
        for (int i = nums2.size() - 1; i >= 0; i--)
        {
            while (!s.empty() and s.top() <= nums2[i])
            {
                s.pop();
            }
            if (s.empty())
            {
                ng[nums2[i]] = -1;
            }
            else
            {
                ng[nums2[i]] = s.top();
            }
            s.push(nums2[i]);
        }

        vector <int> ans(nums1.size());
        for (int i = 0; i < nums1.size(); i++)
        {
            ans[i] = ng[nums1[i]];
        }

        return ans;
    }
};