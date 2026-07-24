class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char,int> mp;
        mp['I']=1;
        mp['V']=5;
        mp['X']=10;
        mp['L']=50;
        mp['C']=100;
        mp['D']=500;
        mp['M']=1000;
        int size=s.size()-1;
        int ans=0;
        ans+=mp[s[size]];
        size--;
        while(size >= 0){
            if(mp[s[size]] < mp[s[size+1]])
                ans -= mp[s[size]];
            else
                ans += mp[s[size]];
            size--;
        }
        return ans;

    }
};