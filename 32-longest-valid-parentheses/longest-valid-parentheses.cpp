class Solution {
public:
    int longestValidParentheses(string s) {
        int open=0, close=0;
        int result = 0;
        int n = s.length();

        for(int i=0; i<n; i++){
            if(s[i]=='(') open++;
            else close++;

            if(open==close){
                result = max(result, open+close);
            }
            if(close > open){
                open = close = 0;
            }
        }

        open = 0;
        close = 0;
        for(int i=n-1; i>=0; i--){
            if(s[i]=='(') open++;
            else close++;

            if(open==close){
                result = max(result, open+close);
            }
            if(open > close){
                open = close =0;
            }
        }

        return result;
    }
};