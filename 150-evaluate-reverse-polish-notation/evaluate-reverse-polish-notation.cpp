class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        for(string c:tokens){
            if(c!="+" && c!="-" && c!="*" && c!="/"){
                st.push(stoi(c));//2 1
            }
            else{
                int a=st.top();//1
                st.pop();
                int b=st.top();//2
                st.pop();
                if(c=="+"){
                    st.push(a+b);
                }
                else if(c=="-"){
                    st.push(b-a);
                }
                else if(c=="*"){
                    st.push(a*b);
                }
                else if(c=="/"){
                    st.push(b/a);
                }
            }
        }
        
        return st.top();
    }
};