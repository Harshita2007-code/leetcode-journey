class Solution {
public:
    long long countSubarrays(vector<int>& nums, int minK, int maxK) {
        long long count =0;
        int invalid = -1;
        for(int i=0; i<nums.size(); i++){
            if(nums[i] < minK || nums[i] > maxK)
                invalid = i;

            count += (i-invalid);
        }

        return count;
    }
};