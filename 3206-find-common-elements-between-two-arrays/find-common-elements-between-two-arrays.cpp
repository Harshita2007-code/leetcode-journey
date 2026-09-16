class Solution {
public:
    vector<int> findIntersectionValues(vector<int>& nums1, vector<int>& nums2) {
        unordered_map <int, int> m1;
        unordered_map <int, int> m2;

        for(auto n : nums1){
            m1[n]++;
        }

        for(auto n : nums2){
            m2[n]++;
        }

        int c1=0, c2=0;
        for(auto n : nums1){
            if(m2[n]!=0)
                c1++;
        }
        for(auto n : nums2){
            if(m1[n]!=0)
                c2++;
        }

        return {c1, c2};
    }
};