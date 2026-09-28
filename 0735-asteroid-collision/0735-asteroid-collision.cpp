class Solution
{
public:
    vector <int> asteroidCollision(vector <int> &asteroids)
    {
        stack <int> s;
        for (int i = 0; i < asteroids.size(); i++)
        {
            int col = 0;
            while (!s.empty() and s.top() > 0 and asteroids[i] < 0)
            {
                if (s.top() < -1 * asteroids[i])
                {
                    s.pop();
                }
                else if (s.top() == -1 * asteroids[i])
                {
                    s.pop();
                    col = 1;
                    break;
                }
                else
                {
                    col = 1;
                    break;
                }
            }
            if (col == 0)
            {
                s.push(asteroids[i]);
            }
        }

        vector <int> v;
        while (!s.empty())
        {
            v.push_back(s.top());
            s.pop();
        }
        reverse(v.begin(), v.end());
        return v;
    }
};