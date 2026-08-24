class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
        vector<int> sub;
        recursive(nums, sub, 0, ans);

        return ans;
    }

    void recursive(vector<int> &nums, vector<int> &sub, int i, vector<vector<int>> &ans)
    {
        if (i == nums.size())
        {
            ans.push_back({sub});
            return;
        }
        
        sub.push_back(nums[i]);
        recursive(nums, sub, i+1, ans);
        sub.pop_back();

        int ind = i+1;
        while (ind < nums.size() && nums[i] == nums[ind])
        {
            ind++;
        }
        recursive(nums, sub, ind, ans);
    }
};