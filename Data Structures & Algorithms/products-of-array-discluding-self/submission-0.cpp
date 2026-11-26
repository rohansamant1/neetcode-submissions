class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
    vector<int>ans;
    int p=1;
    long long pwoz=1;
    int zeros=0;
    int firstZero=0;
    for(int i=0;i<nums.size(); i++)
    {
        if(nums[i]==0)
        {
            zeros++;
            firstZero=i;
        }

        if(nums[i]!=0)
        pwoz*=nums[i];

        p*=nums[i];
    }
    if(zeros>=2)
    {
        for(int i =0; i<nums.size(); i++)
        ans.push_back(0);
    }

    if(zeros==1)
    {
        for(int i =0; i<nums.size(); i++)
        {
            if(i==firstZero)
            ans.push_back(pwoz);

            else
            ans.push_back(0);
        }
    }

    if(zeros==0)
    {
        for(int i =0; i<nums.size(); i++)
        {
            ans.push_back(p/nums[i]);
        }
    }

    return ans;
    }
};