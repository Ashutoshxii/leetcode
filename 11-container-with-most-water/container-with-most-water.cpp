class Solution
{
    public:
        int maxArea(vector<int> &height)
        {
            int maxi = -1;
            int i = 0;
            int n = height.size() - 1;
            int j = n;
            int l = 0;
            int b = 0;
            while (i < j)
            {
                l = min(height[i], height[j]);
                b = j - i;
                int loc = l * b;
                maxi = max(loc, maxi);
                if (height[i] >= height[j])
                {
                    j--;
                }
                else
                {
                    i++;
                }
            }
            return maxi;
        }
};