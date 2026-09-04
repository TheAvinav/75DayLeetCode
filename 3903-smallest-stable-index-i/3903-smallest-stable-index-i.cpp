class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();
        // int answer = -1;
        for (int i = 0; i < n; i++)
        {
            int maxValue = nums[0];
            int minValue = nums[n-1];

            for (int j = 0; j <= i; j++)
            {
                maxValue = max(maxValue, nums[j]);
            }

            for (int k = i; k < n; k++)
            {
                minValue = min(minValue, nums[k]);
            }

            if (maxValue - minValue <= k)
            {
                return i;
            }
        }
        return -1;
    }
};