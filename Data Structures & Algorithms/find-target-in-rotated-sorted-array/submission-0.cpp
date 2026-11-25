class Solution {
public:
    int binary(vector<int>& nums, int s, int e, int target)
    {
        int mid= (s+e)/2;
        while(s<=e)
        {
            if(nums[mid]==target)
            return mid;

            else if(nums[mid]<target)
            s=mid+1;

            else
            e=mid-1;

            mid= (s+e)/2;
        } return -1;
    }
    int search(vector<int>& nums, int target) {
        int s=0,e=nums.size()-1;
        
        while(s<e)
        {
            int mid= (s+e)/2;
            if(nums[mid]>=nums[0])
            s=mid+1;

            else
            e=mid;
        }int pivot=s-1;

        if(binary(nums,0,pivot,target)>-1)
        return binary(nums,0,pivot,target);

        else if(binary(nums,pivot+1,nums.size()-1,target)>-1)
        return binary(nums,pivot+1,nums.size()-1,target);
        
        else return-1;
    }
};