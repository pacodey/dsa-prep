class Solution
{
public:
    bool searchMatrix(vector <vector <int>> &matrix, int target)
    {
        int lower = 0;
        int upper = matrix.size() - 1;
        int row = -1;

        while (lower <= upper)
        {
            int ymid = lower + (upper - lower)/2;
            if (matrix[ymid][0] <= target and target <= matrix[ymid][matrix[0].size() - 1])
            {
                // number is in ymid row
                row = ymid;
                break;
            }
            else if (target < matrix[ymid][0])
            {
                upper = ymid - 1;
            }
            else
            {
                lower = ymid + 1;
            }
        }

        if (row == -1)
        {
            return false;
        }

        lower = 0;
        upper = matrix[0].size() - 1;
        while (lower <= upper)
        {
            int xmid = lower + (upper - lower)/2;
            if (matrix[row][xmid] == target)
            {
                return true;
            }
            else if (matrix[row][xmid] > target)
            {
                upper = xmid - 1;
            }
            else
            {
                lower = xmid + 1;
            }
        }
        return false;
    }
};