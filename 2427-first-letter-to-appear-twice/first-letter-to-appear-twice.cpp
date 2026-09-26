class Solution {
public:
    char repeatedCharacter(string s) {
        unordered_map <char, int> mp;
        char ans;

        for(auto ele : s){
            mp[ele]++;

            if(mp[ele]==2){
                ans = ele;
                break;
            }
        }

        return ans;
    }
};