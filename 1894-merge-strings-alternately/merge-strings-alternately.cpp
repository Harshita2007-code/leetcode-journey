class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int i=0;
        string merged = "";
        int n = word1.length(), m = word2.length();

        while(i<min(n,m)){
            merged += word1[i];
            merged += word2[i];
            i++;
        }

        if(n > m){
            while(i < n){
                merged += word1[i];
                i++;
            }
        }

        if(n < m){
            while(i < m){
                merged+= word2[i];
                i++;
            }
        }

        return merged;

    }
};