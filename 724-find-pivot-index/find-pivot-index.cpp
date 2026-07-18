class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int RightSum=0,LeftSum=0;
        for(int val:nums)RightSum+=val;
        for(int i=0;i<nums.size();i++){
            RightSum-=nums[i];
            if(RightSum==LeftSum) return i;
            
            LeftSum+=nums[i];
        }
        return -1;
    }
};