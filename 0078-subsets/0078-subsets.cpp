class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> sub;
        recursive(nums, ans, sub, 0);

        return ans;
    }

    void recursive(vector<int> &nums, vector<vector<int>> &ans, vector<int> &sub, int i)
    {
        ans.push_back(sub);
        for (int j = i; j < nums.size(); j++)
        {
            sub.push_back(nums[j]);
            recursive(nums, ans, sub, j+1);
            sub.pop_back();
        }
    }
};