class Solution {
public:
    int findMin(vector<int>& nums) {
        //sort(nums.begin(),nums.end());  first solution
        //return nums[0];
        int ans = 0;
       
        for(int i = 0; i<nums.size(); i++)
        {
            if(nums[i] >=nums[(i+1)%nums.size()]) 
            ans=nums[(i+1)%nums.size()];
        }
        return ans;
    }
};