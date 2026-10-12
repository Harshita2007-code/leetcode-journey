class Solution {
public:
    int minElement(vector<int>& nums) {
        int mini = INT_MAX;
        for(int n : nums){
            int sum = 0;
            while(n > 0){
                sum += (n%10);
                n /= 10;
            }
            mini = min(mini, sum);
        }

        return mini;
    }
};