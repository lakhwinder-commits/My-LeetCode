class Solution {
public:
    bool isAllowed(int sum, int k, int threshold){
        if(double(sum/k)>=threshold) return true;
        else return false;
    }
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int i=0,ans=0,sum=0;
        for(i=0;i<k;i++){
            sum+=arr[i];
        }
        if(isAllowed(sum,k,threshold))ans++;
        while(i<arr.size()){
            sum+=arr[i];
            sum-=arr[i-k];
            if(isAllowed(sum,k,threshold))ans++;
            i++;
        }
        return ans;
    }
};