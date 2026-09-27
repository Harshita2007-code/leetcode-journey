class Solution {
public:
    string reverseParentheses(string s) {
        stack <char> st;

        for(char c : s){
            
            if(c==')'){
                string temp = "";
                while(!st.empty() && st.top()!='('){
                    temp += st.top();
                    st.pop();
                }
                if(!st.empty()){
                    st.pop();
                }
                for(char ch : temp){
                    st.push(ch);
                }
            }else{
                st.push(c);
            }
        }

        string t = "";
        while(!st.empty()){
            t += st.top();
            st.pop();
        }
        reverse(t.begin(), t.end());
        return t;
    }
};