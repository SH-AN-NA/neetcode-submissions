class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        //using hashmap
        map<string,vector<string>> hash ;
        for(const string &s : strs)
        {
            string curr = s;
            sort(curr.begin(),curr.end()) ;
            hash[curr].push_back(s);
        }
        vector<vector<string>> result;
        for (auto& pair : hash) {
            result.push_back(pair.second);
        }
        return result;
    }
};
