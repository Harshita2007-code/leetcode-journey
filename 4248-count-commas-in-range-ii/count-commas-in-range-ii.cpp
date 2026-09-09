class Solution {
public:
    long long countCommas(long long n) {
        if(n<1000) return 0;
        long long temp = 1000;
        long long count =0;
        while(n>= temp){
            count += n + 1 - temp;
            temp *= 1000;
        }
        return count;
    }
};