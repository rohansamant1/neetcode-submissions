class Solution {
public:
    void solve(vector<vector<int>>&ans,vector<int>& nums,vector<int>output,int index)
    {
        if(index>=nums.size())
        {
             ans.push_back(output);
             return;
        }

        solve(ans,nums,output,index+1); //exclude

        int element = nums[index];
        output.push_back(element);
        solve(ans,nums,output,index+1);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>output; 
        int index = 0;
        solve(ans,nums,output,index);
        return ans;
    }
};