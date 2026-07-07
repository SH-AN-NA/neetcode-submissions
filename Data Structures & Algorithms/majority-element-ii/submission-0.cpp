class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size() ;
        // 1 1 1 2 2 2 2 3 3 3 3 3 
        sort(nums.begin(),nums.end()) ;
        int maj1 = nums[(n-1)/3] ;
        int maj2 = nums[n - (n-1)/3 - 1] ;

        if(maj1==maj2)
            return {maj1} ;
        int cnt1 = 0 , cnt2 = 0 ;
        for(int i = 0 ; i < n ; i++) {
            if(nums[i] == maj1)
                cnt1++ ;
            if(nums[i] == maj2)
                cnt2++ ;
        }
        vector<int> sol ;
        if(cnt1 > n/3)
            sol.push_back(maj1) ;
        if(cnt2 > n/3)
            sol.push_back(maj2) ;
        return sol ;
    }
};
// 1 1 1 2 2 2 3 3 