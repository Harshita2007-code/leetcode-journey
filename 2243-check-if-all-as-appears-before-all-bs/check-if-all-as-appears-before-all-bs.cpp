class Solution {
public:
    bool checkString(string s) {
        bool a_appear = true;
        
        for(int i = 1; i< s.length(); i++){
            if(s[i-1]=='b' && s[i] == 'a') a_appear = false;
        }

        return a_appear;
    }
};