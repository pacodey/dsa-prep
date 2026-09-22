class Solution
{
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q)
    {
        if (root == NULL or root == p or root == q)
        {
            return root;
        }

        TreeNode *left = lowestCommonAncestor(root -> left, p, q);
        TreeNode *right = lowestCommonAncestor(root -> right, p, q);

        if (left != NULL and right != NULL)
        {
            return root;
        }
        if (left != NULL)
        {
            return left;
        }
        return right;
    }
};