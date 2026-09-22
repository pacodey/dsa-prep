class Solution
{
private:
    int maxsum = INT_MIN;
    int subsum(TreeNode *node)
    {
        if (node == NULL)
        {
            return 0;
        }

        int lsum = max(0, subsum(node -> left));
        int rsum = max(0, subsum(node -> right));

        maxsum = max(maxsum, lsum + rsum + node -> val);
        return node -> val + max(lsum, rsum);
    }
public:
    int maxPathSum(TreeNode* root)
    {
        maxsum = INT_MIN;
        subsum(root);
        return maxsum;
    }
};