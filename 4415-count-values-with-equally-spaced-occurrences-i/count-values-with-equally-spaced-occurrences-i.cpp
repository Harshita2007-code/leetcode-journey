class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        int n = nums.size();
        int count =0;
        unordered_map <int, vector<int>> index;

        for(int i=0; i<n; i++){
            index[nums[i]].push_back(i);
        }

        for(auto &[n, idx] : index){
            if(idx.size()==3){
                if(idx[1]-idx[0] == idx[2]-idx[1]){
                    count++;
                }
            }
        }
        
        return count;
    }
};