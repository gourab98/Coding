class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<vector<int>> vec;
        rowIndex++;
        
        for(int i=0;i<rowIndex;i++){
            vector<int> v1;
            
            for(int j=0;j<=i;j++){
                if((j==0) || (i==j)){
                    v1.push_back(1);
                }
                else{
                    int p = vec[i-1][j-1]+vec[i-1][j];
                    v1.push_back(p);
                }
            }
            vec.push_back(v1);
        }
        return vec[rowIndex-1];
    }
};