class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double Curr=0;
        for(int i=0;i<k;i++){
            Curr=Curr+nums[i];
        }
        double max=Curr;
        for(int i=1;i<=nums.size()-k;i++){
            Curr=Curr+nums[i+k-1]-nums[i-1];
            if(Curr>max) max=Curr;
        }
        return max/k;
    }
};