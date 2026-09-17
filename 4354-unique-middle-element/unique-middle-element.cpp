class Solution {
public:
    bool isMiddleElementUnique(vector<int>& nums) {
        unordered_map <int, int> freq;
        for(auto n : nums){
            freq[n]++;
        }
        int left=0, right= nums.size()-1;
        int mid = left + (right-left)/2;
        if(freq[nums[mid]] == 1){
            return true;
        }

        return false;
    }
};