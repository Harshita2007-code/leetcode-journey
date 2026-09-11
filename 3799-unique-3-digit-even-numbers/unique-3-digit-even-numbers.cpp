class Solution {
public:
    int totalNumbers(vector<int>& digits) {
        int n = digits.size();
        vector <bool> result(1000, false);
        int count=0;
        
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                for(int k=0; k<n; k++){
                    if(i!=j && i!=k && j!=k
                    && digits[i]!=0
                    && digits[k]%2==0
                    ){

                        int num = digits[i]*100 + digits[j]*10 + digits[k];

                        if(!result[num]){
                            result[num]= true;
                            count++;
                        }
                    }
                }
            }
        }

        return count;
    }
};