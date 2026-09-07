class Solution {
public:
    int theMaximumAchievableX(int num, int t) {

        // value of num after t steps = num + t
        // value of x after t steps = x - t
        /* the question state that these should be equal so 
            x - t = num + t
            x = num + (2*t)
        */

        return num + (2*t);
    }
};