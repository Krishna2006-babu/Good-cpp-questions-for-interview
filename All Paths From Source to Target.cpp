//Approach-3 (Using BFS)
class Solution {
public:
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        int n = graph.size();
        
        int source = 0;
        int target = n-1;
        
        vector<vector<int>> result;
        vector<int> temp;
        
        queue<vector<int>> que;
        temp.push_back(0);
        que.push(temp);
        
        while(!que.empty()) {
            vector<int> currPath = que.front();
            que.pop();
            
            int lastNode = currPath.back();
            
            if(lastNode == target) {
                result.push_back(currPath);
            } else {
                for(int &v : graph[lastNode]) {
                    vector<int> path = currPath;
                    path.push_back(v);
                    que.push(path);
                }
            }
        }
      
        
        return result;
    }
};
