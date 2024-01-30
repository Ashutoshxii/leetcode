class Solution
{
    public:
        vector<int> twoSum(vector<int> &numbers, int target)
        {
            vector<int> ans;
            int n = numbers.size() - 1;
            for (int i = 0; i <= n; i++)
            {
                int left = i + 1;
                int right = n;
                int mid = (left + right) / 2;
                while (left <= right)
                {
                    mid = (left + right) / 2;
                    if (numbers[mid] + numbers[i] == target)
                    {
                        ans.push_back(i + 1);
                        ans.push_back(mid + 1);
                        return ans;
                    }
                    else if (numbers[mid] + numbers[i] > target)
                    {
                        right = mid - 1;
                    }
                    else
                    {
                        left = mid + 1;
                    }
                }
            }
            if (ans.empty())
            {
                ans.push_back(-1);
            }
            return ans;
        }
};