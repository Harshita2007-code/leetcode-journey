class Solution {
public:
    int minMoves2(vector<int>& nums) {
        int n = nums.size();
        int i=0, j=n-1;
        int count = 0;

        sort(nums.begin(), nums.end());

        while(i <= j){
            count += nums[j] - nums[i];
            i++;
            j--;
        }

        return count;
    }
};