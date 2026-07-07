class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        map<int,int> m;
        int s=0;
        m[0]=1;
        int ans=0;
        //n=[1] , k=0
        for(auto n: nums)
        {
            s+=n;
            m[s]++;
            ans+=m[s-k];
            if(k==0 ) ans--; 
            cout<<ans<<endl;
        }

        return ans;
    }
};