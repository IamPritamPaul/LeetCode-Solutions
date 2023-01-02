class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        unordered_map<int, int> um;
        vector<int> ans;
        for (int i = 0; i < nums.size(); i++)
        {
            int x = target - nums[i];
            if (um.find(x) != um.end())
            {
                ans.push_back(i);
                ans.push_back(um[x]);
                return ans;
            }
            else
            {
                um[nums[i]] = i;
            }
        }
        return ans;
    }
};