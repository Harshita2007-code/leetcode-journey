class Solution {
public:
    int maxPower(string s) {
        int count = 0;
        int maxi = 0;

        if(s.length()==1){
            return 1;
        }

        for(int i=0; i<s.length(); i++){
            if(s[i] != s[i+1]){
                count += 1;
                maxi = max(maxi, count);
                count = 0;
            }else{
                count++;
            }
        }

        return maxi;
    }
};