class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        vector<int>ans;
        for(int i=0; i<nums.size();i++)
        {
            mp[nums[i]]++;
        }

        vector<pair<int,int>> v(mp.begin(), mp.end());

        sort(v.begin(), v.end(), [](auto &a, auto &b) {
        return a.second > b.second;
        });

        int element = 1;
        for(auto &it : v)
        {
            if(element <= k)
            {
                ans.push_back(it.first);
                element++;
            }
            else
                break;
        }
        return ans;
    }
};