class Solution {
public:
    int majorityElement(vector<int>& nums) {
       int ans=0,fre=0;
       for(int i=0;i<nums.size();i++){
        if(fre==0){
            ans=nums[i];
        }
        if(nums[i]==ans) fre++;
        else fre --;
       }
       return ans;
    }
};