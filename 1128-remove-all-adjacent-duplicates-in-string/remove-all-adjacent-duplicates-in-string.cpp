class Solution {
public:
    string removeDuplicates(string s) {
        stack <char> st;
        for(char c : s){
            if(!st.empty() && c==st.top()){
                st.pop();
            }else{
                st.push(c);
            }
        }
        string temp = "";
        while(!st.empty()){
            temp += st.top();
            st.pop();
        }
        reverse(temp.begin(), temp.end());
        return temp;
        
    }
};