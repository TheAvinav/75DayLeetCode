class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int>sub;
        vector<vector<int>> ans;
        int left = target;
        recurse(candidates, sub, ans, 0, left);
        return ans;
    }

    void recurse(vector<int>&nums, vector<int>&sub, vector<vector<int>>&ans, int i, int left){
        if (left == 0)
        {
            ans.push_back(sub);
            return;
        }
        if (left < 0)
        {
            return;
        }

        if (i == nums.size())
        {
            return;
        }

        sub.push_back(nums[i]);
        left -= nums[i];
        recurse(nums, sub, ans, i, left);

        sub.pop_back();
        left += nums[i];
        recurse(nums, sub, ans, i+1, left);
    }
};