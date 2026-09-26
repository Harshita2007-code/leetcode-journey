class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        unordered_map <int, int> f;
        for(auto num : nums){
            f[num]++;
        }

        int sum =0;
        for(int i=0; i<f.size(); i++){
            if(f[i]==1){
                sum += i;
            }
        }

        return sum;
    }
};