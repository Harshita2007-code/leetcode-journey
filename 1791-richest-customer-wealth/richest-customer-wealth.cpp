class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int maxi = INT_MIN;
        for(auto num : accounts){
            int sum =0;
            for(int i=0; i<num.size(); i++){
                sum += num[i];
            }
            maxi = max(maxi, sum);
        }
        return maxi;
    }
};