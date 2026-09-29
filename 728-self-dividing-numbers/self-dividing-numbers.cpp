class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector <int> num;
        bool found = true;
        for(int i=left; i<=right; i++){
            int temp = i;
            while(temp >0){
                int d = temp % 10;
                if(d==0 ||(i%d!=0 && d!=0 )){
                    found = false;
                }
                temp /= 10;
            }
            if(found==true){
                num.push_back(i);
            }
            found = true;
        }

        return num;
    }
};