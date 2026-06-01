class Solution
{
public:
    int minimumCost(vector<int>& cost)
    {
        sort(cost.begin(), cost.end());
        int total = 0;
        int free = 0;
        int n = cost.size();
        for (int c : cost)
        {
            total += c;
        }
        for (int i = n - 3; i >= 0; i -= 3)
        {
            free += cost[i];
        }
        return total - free;
    }
};