class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map <char, int> m;
        for(char c: magazine){
            m[c]++;
        }
        unordered_map <char, int> r;
        for(char c : ransomNote){
            r[c]++;
        }
        for(char c : ransomNote){
            if(m[c]<r[c])
                return false;
        }

        return true;

    }
};