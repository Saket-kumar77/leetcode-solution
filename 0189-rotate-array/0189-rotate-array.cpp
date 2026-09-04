class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int a=nums.size();
        k%=a;
        vector<int> temp(a);
            for(int i=0;i<a;i++){
                temp[(i+k)%a]=nums[i];
            }
            nums=temp;
        for(int i=0;i<a;i++){
            cout<<nums[i];
        }
    }
};