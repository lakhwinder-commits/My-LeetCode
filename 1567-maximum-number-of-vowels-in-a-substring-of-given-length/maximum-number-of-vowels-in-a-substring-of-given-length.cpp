class Solution {
public:
    int maxVowels(string s, int k) {
       int i,ans=0,count=0;
        for(i=0;i<k;i++){
            if(s[i]=='a' || s[i]=='e' || s[i]=='i'|| s[i]=='o' ||s[i]=='u' || s[i]=='A' || s[i]=='E' || s[i]=='I'|| s[i]=='O' ||s[i]=='U'){
                count++;
                ans=max(ans,count);
            }

       } 
       
       while(i<s.size()){
            if((s[i]=='a' || s[i]=='e' || s[i]=='i'|| s[i]=='o' ||s[i]=='u' || s[i]=='A' || s[i]=='E' || s[i]=='I'|| s[i]=='O' ||s[i]=='U') && (s[i-k]!='a' && s[i-k]!='e' && s[i-k]!='i'&& s[i-k]!='o' && s[i-k]!='u' && s[i-k]!='A' && s[i-k]!='E' && s[i-k]!='I'&& s[i-k]!='O' && s[i-k]!='U')){
                count++;
                ans=max(ans,count);
            
            }
            else if((s[i]!='a' && s[i]!='e' && s[i]!='i'&& s[i]!='o' &&s[i]!='u' && s[i]!='A' && s[i]!='E' && s[i]!='I'&& s[i]!='O' && s[i]!='U') && (s[i-k]=='a' || s[i-k]=='e' || s[i-k]=='i'|| s[i-k]=='o' ||s[i-k]=='u' || s[i-k]=='A' || s[i-k]=='E' || s[i-k]=='I'|| s[i-k]=='O' ||s[i-k]=='U')){
                count--;
                ans=max(ans,count);
            }
            i++;
       }
       return ans;
    }
};