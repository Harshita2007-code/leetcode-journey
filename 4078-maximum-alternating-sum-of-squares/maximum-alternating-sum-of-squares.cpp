class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {

        int n = nums.size();

        for(int &num : nums){
            if(num<0) num*= -1;
        }

        sort(nums.begin(), nums.end(), greater<int>());
        long long score = 0;
        for(int i=0; i<n/2; i++){
            long long high =  nums[i] * nums[i];
            long long low =  nums[n-i-1] * nums[n-i-1];
            score = score + high - low;
        }

        if(n%2 != 0){
            score += nums[n/2] * nums[n/2];
        }

        return score;
    }
};