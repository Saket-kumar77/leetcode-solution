class Solution {
public:
    int findMin(vector<int>& nums) {
        int n=nums.size();
        int mid,ans=nums[0],start=0,end=n-1;
        while(start<=end){
            mid=start+(end-start)/2;
            if(nums[mid]>=nums[0]){
            start=mid+1;
            }
            else{
                ans=nums[mid];
                end=mid-1;
            }
        }
        return ans;
    }
};