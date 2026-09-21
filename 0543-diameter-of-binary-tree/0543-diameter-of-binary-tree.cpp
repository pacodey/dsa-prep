class Solution
{
private:
    int maxd = 0;
    int height(TreeNode* node)
    {
        if (node == nullptr)
        {
            return 0;
        }

        int lh = height(node -> left);
        int rh = height(node -> right);

        maxd = max(maxd, lh + rh);

        return 1 + max(lh, rh);
    }

public:
    int diameterOfBinaryTree(TreeNode* root)
    {
        maxd = 0;
        height(root);
        return maxd;
    }
};