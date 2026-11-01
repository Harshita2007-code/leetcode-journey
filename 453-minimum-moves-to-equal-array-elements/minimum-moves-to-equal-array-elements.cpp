class Solution {
public:
    int minMoves(vector<int>& nums) {
        int mini = INT_MAX;
        long long sum = 0;

        for(int num : nums){
            mini = min(mini, num);
            sum += num;
        }

        int n = nums.size();
        long long s = n* mini;

        return sum - s;
    }
};