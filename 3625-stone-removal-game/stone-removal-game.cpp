class Solution {
public:
    bool canAliceWin(int n) {
 
        if(n<10){
            return false;
        }else if(n==10){
            return true;
        }

        bool alice = false;
        int temp = 10;
        while(n>=temp){
            n -= temp;
            temp--;
            alice = !alice;
        }

        return alice;
        
    }
};