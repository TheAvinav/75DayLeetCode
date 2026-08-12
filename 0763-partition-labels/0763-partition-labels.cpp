class Solution {
public:
    vector<int> partitionLabels(string s) {
        unordered_map<int, int> freq;
        for (int i = 0; i < s.size(); i++)
        {
            char ch = s[i];
            freq[ch] = i;
        }
        
        vector<int> res;
        int prev = -1;
        int max_i = 0;

        for (int i = 0; i < s.size(); i++)
        {
            max_i = max(max_i, freq[s[i]]);
            if (max_i == i)
            {
                res.push_back(max_i - prev);
                prev = max_i;
            }
        }

        return res;
        
    }
};