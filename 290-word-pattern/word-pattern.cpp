class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char, string> p_s;   
        unordered_map<string, char> s_p;   

        vector<string> words;
        stringstream ss(s);
        string word;

        
        while (ss >> word) {
            words.push_back(word);
        }

        
        if (pattern.size() != words.size())
            return false;

        for (int i = 0; i < pattern.size(); i++) {
            char c = pattern[i];
            string w = words[i];

           
            if (p_s.count(c) && p_s[c] != w)
                return false;

            
            if (s_p.count(w) && s_p[w] != c)
                return false;

            
            p_s[c] = w;
            s_p[w] = c;
        }

        return true;
    }
};