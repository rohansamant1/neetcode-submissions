class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        for(int f= 0; f < nums.size(); f++){

            for(int v= f+1; v < nums.size(); v++){

                if(nums[f] + nums[v]==target)
                return{f,v};
            }
        } return{};
    }
};