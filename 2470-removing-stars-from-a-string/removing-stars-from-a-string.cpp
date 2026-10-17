class Solution {
public:
    string removeStars(string s) {

        stack <char> st;

        for(char c : s){
            if(c == '*'){
                st.pop();
            }else{
                st.push(c);
            }
        }        

        string temp;
        while(!st.empty()){
            temp += st.top();
            st.pop();
        }

        reverse(temp.begin(), temp.end());
        return temp;
    }
};