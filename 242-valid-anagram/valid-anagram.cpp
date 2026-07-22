class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size())
        return false;
        unordered_map<char,int> l;
        for(char c:s){
            l[c]++;
        }
        for(char c:t){
            l[c]--;
        }
        for(auto x:l){
            if(x.second!=0) return false;
        }
        return true;
    }

};