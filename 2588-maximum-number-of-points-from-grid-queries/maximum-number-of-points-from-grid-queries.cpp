class Solution {
public:
    vector<int> maxPoints(vector<vector<int>>& grid, vector<int>& queries) {
        int rowy = grid.size() ;
        int coly = grid[0].size();

        vector<int> ans(queries.size(), 0);
 
        vector<pair<int, int>> direct = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};

       
        vector<pair<int, int>> sortQ;
        for (int index = 0; index < queries.size(); index++) {
            sortQ.push_back({queries[index], index});
        }
        
        sort(sortQ.begin(), sortQ.end());

    
        priority_queue<pair<int, pair<int, int>>,vector<pair<int, pair<int, int>>>, greater<>>minHeap;

        vector<vector<bool>> visited(rowy, vector<bool>(coly, false));
    
        int totalPoints = 0;
      
        minHeap.push({grid[0][0], {0, 0}});
        visited[0][0] = true;
 
        for (auto [queryValue, queryIndex] : sortQ) {
         
            while (!minHeap.empty() && minHeap.top().first < queryValue) {
                auto [cellValue, position] = minHeap.top();
                minHeap.pop();
                int currentRow = position.first, currentCol = position.second;
            
                totalPoints++;

 
                for (auto [ro, co] : direct) {
                    int newRow = currentRow + ro,
                        newCol = currentCol + co;

                 
                    if (newRow >= 0 && newCol >= 0 && newRow < rowy &&
                        newCol < coly && !visited[newRow][newCol]) {
                        minHeap.push({grid[newRow][newCol], {newRow, newCol}});
       
                        visited[newRow][newCol] = true;
                    }
                }
            }
          
            ans[queryIndex] = totalPoints;
        }
        return ans;
    }
};