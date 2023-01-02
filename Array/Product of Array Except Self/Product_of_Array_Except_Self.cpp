class Solution
{
public:
    vector<int> productExceptSelf(vector<int> &nums)
    {
        int mul = 1;
        int zero_count = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == 0)
                zero_count++;
            else
                mul *= nums[i];
        }
        vector<int> ans(nums.size(), 0);
        if (zero_count > 1)
        {
            return ans;
        }
        for (int i = 0; i < nums.size(); i++)
        {
            if (zero_count == 1)
            {
                if (nums[i] == 0)
                {
                    ans[i] = mul;
                }
                else
                {
                    ans[i] = 0;
                }
            }
            else
                ans[i] = mul / nums[i];
        }
        return ans;
    }
};