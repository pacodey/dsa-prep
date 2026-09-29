class Solution
{
public:
    int largestRectangleArea(vector <int> &heights)
    {
        stack <int> s;
        int maxarea = 0;

        for (int i = 0; i < heights.size(); i++)
        {
            while (!s.empty() and heights[s.top()] > heights[i])
            {
                int h = s.top();
                s.pop();

                int nse = i;
                int pse = (s.empty() ? -1 : s.top());
                maxarea = max(maxarea, (nse - pse - 1) * heights[h]);
            }
            s.push(i);
        }

        while (!s.empty())
        {
            int h = s.top();
            s.pop();
            
            int nse = heights.size();
            int pse = (s.empty() ? -1 : s.top());
            maxarea = max(maxarea, (nse - pse - 1) * heights[h]);
        }

        return maxarea;
    }
};