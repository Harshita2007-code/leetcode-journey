class Solution {
public:
    int minInsertions(string s) {
        int count = 0;
        int ans = 0;
        for(char c : s){
            if(c=='('){
                count += 2;

                if(count%2 != 0){
                    ans += 1;
                    count -= 1;
                }
            }else{
                count --;

                if(count < 0){
                    ans += 1;
                    count += 2;
                }
            }
        }

        return count + ans;
    }
};