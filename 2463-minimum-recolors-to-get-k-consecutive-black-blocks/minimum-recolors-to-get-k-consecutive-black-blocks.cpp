class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int count=0,ans=INT_MAX,i;
        for(i=0;i<k;i++){
            if(blocks[i]=='W'){
                count++;
            }
        }
        ans=min(ans,count);
        while(i<blocks.size()){
            if(blocks[i]=='W' && blocks[i-k]=='B'){
                count++;
            }
            else if(blocks[i]=='B' && blocks[i-k]=='W'){
                count--;
            }
            ans=min(ans,count);
            i++;
        }
        return ans;
    }
};