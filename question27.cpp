class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        unordered_map<int,vector<int>>mp;
        int n=groupSizes.size();
        for(int i=0;i<n;i++){
            mp[groupSizes[i]].push_back(i);
        }
        vector<vector<int>>ans;
        for(auto it:mp){
            int idx=it.first;
            vector<int>val=it.second;
            int size=val.size()/idx;
            int i=0;
            for(int k=0;k<size;k++){
                vector<int>temp;
                for(int j=0;j<idx;j++){
                    temp.push_back(val[i]);
                i++;    
                }
                ans.push_back(temp);

            }
        }
        return ans;

    }
};
