class Solution {
public:
    int binary(vector<int>& nums,int l,int r,int target){
        if(l>r)
        return -1;
        int m=l+(r-l)/2;
        if(nums[m]==target)
        return m;
        if(nums[m]>target)
        return binary(nums,l,m-1,target);
        else
        return binary(nums,m+1,r,target);
    }
    int search(vector<int>& nums, int target) {
       /*int n=nums.size();
        int mid,start=0,end=n-1;
        while(start<=end){
            mid=(start+end)/2;
            if(nums[mid]==target)
            return mid;
            else if(nums[mid]<target)
            start=mid+1;
            else
            end=mid-1;
        }
        return -1;*/
        int l=0,r=nums.size()-1;
        return binary(nums,l,r,target);
    }
};