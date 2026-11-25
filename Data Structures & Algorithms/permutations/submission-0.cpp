class Solution {
public:
    void solve(vector<int>& nums, vector<vector<int>>& ans, int index)
    {
        if(index>=nums.size())
        {
            ans.push_back(nums); // base case
            return;
        }
        // solve one case
        for(int i = index; i<nums.size(); i++)
        {
            swap(nums[index],nums[i]);
            solve(nums,ans,index+1); // calling recusion
            swap(nums[index],nums[i]);// backtracking(undoing the sawp to preserve original order for next swap)
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>ans;
        int index = 0;
        solve(nums,ans,index);
        return ans;
    }
};