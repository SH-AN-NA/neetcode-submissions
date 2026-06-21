class Solution {
public:
    int majorityElement(vector<int>& nums) {
        //rand
        int n = nums.size() ;

        while(true) {
            int cand = nums[rand()%n] ;
            int cnt = 0 ;
            for(int i : nums) {
                if(i == cand)
                    cnt++ ;
            }
            if(cnt > n/2)
                return cand ;
        }

    }
};