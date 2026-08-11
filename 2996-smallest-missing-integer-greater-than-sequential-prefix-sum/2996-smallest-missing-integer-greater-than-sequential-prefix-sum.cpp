class Solution {
public:
    int missingInteger(vector<int>& nums) 
    {
        int sum = nums[0];

        for (int i = 1; i < nums.size(); i++)
        {
            if (nums[i] == nums[i - 1] + 1)
            {
                sum += nums[i];
            }
            else
            {
                break;
            }
        }

        unordered_set<int> present;

        for (int i = 0; i < nums.size(); i++)
        {
            present.insert(nums[i]);
        }

        while (present.count(sum))
        {
            sum++;
        }

        return sum;
    }
};