class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int idx = 0 ;
        for(auto it = 0 ; it < nums.size() ; it++) {
            if((nums[it] ^ val) != 0) {
                nums[idx] = nums[it] ;
                idx++ ;
            }
        }
        return idx ;
    }
};