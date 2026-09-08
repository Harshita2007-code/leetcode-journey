class Solution {
public:
    int countCommas(int n) {
        if(n<1000) return 0;
        int temp = n-1000;
        return temp+1;
        
    }
};