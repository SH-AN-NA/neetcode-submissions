class Solution {
public:
    int majorityElement(vector<int>& nums) {
        //hashmap // sort check // sort mid ele
        // bit man
        // if any element is greater than n/2 its bit is also greater than n/2 
        int n = nums.size() ;
        vector<int> bit(32,0) ;
        for(int i : nums)
            for(int j = 0 ; j < 32 ; j++)
                bit[j] += (i>>j) & 1 ;

        int res = 0 ;
        for(int i = 0 ; i < 32 ; i++)
            if(bit[i] > n/2)
                res |= (1 << i) ;

        return res ;
    }
};