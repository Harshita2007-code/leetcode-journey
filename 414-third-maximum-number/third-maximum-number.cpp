class Solution {
public:
    int thirdMax(vector<int>& nums) {
        sort(nums.begin(), nums.end(), greater<int>());

        int count = 1;
        int maxi = nums[0];
        int i = 0;
        while(i < nums.size()){
            if(nums[i] < maxi){
                maxi = nums[i];
                count++;
            }
            if(count == 3){
                return maxi;
            }
            i++;
        }

        return nums[0];
    }
};