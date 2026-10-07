class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        
        int count = 0;
        sort(costs.begin(), costs.end());
        long long sum = 0;

        for(int i=0; i< costs.size(); i++){
            sum += costs[i];
            if(sum <= coins){
                count ++;
            }

            if(sum > coins){
                break;
            }
        }

        return count;
    }
};