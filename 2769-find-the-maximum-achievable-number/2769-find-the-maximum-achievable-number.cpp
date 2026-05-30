auto init = []()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();

class Solution
{
public:
    int theMaximumAchievableX(int num, int t)
    {
        return num + 2 * t;
    }
};