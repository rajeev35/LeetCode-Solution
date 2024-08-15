class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        vector<int> ans;
        int n = mat.size();
        int oneCount = INT_MIN;
        int rowNum;
        for(int i = 0;i<n; i++){
            int count = 0;
            for(int j = 0; j<mat[i].size(); j++){
                if(mat[i][j] == 1){
                    count++;
                }
                
            }
            if(count>oneCount){
                oneCount = count;
                rowNum = i;
            }
        }
        
        ans.push_back(rowNum);
        ans.push_back(oneCount);
        return ans;
        
        
        
    }
};