class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> st;
        int x = 0;

        for(string s : operations){
            if(s == "+"){
                int a = st.top();
                st.pop();
                int b = st.top();
                st.push(a);
                st.push(a + b);
            }
            else if(s == "D"){
                st.push(st.top() * 2);
            }
            else if(s == "C"){
                st.pop();
            }
            else{
                st.push(stoi(s));
            }
        }

        while(!st.empty()){
            x += st.top();
            st.pop();
        }

        return x;
    }
};