class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<char> vec;
        for(int i=0;i<board.size();i++){
            for(int j=0;j<board.size();j++){
                vec.push_back(board[i][j]);
            }
            sort(vec.begin(),vec.end());
            for(int j=0;j<board.size()-1;j++){
                if(vec[j]==vec[j+1] &&(vec[j]!='.')){
                    return false;
                }
            }
            vec.clear();
        }
        
        for(int i=0;i<board.size();i++){
            for(int j=0;j<board.size();j++){
                vec.push_back(board[j][i]);
            }
            sort(vec.begin(),vec.end());
            for(int j=0;j<board.size()-1;j++){
                if(vec[j]==vec[j+1] &&(vec[j]!='.')){
                    return false;
                }
            }
            vec.clear();
        }
        
        for(int i=0;i<board.size();i=i+3){
            for(int j=0;j<3;j++){
                int p = i;
                vec.push_back(board[p][j]);
                p++;
                vec.push_back(board[p][j]);
                p++;
                vec.push_back(board[p][j]);
                
            }
            sort(vec.begin(),vec.end());
            for(int j=0;j<board.size()-1;j++){
                if(vec[j]==vec[j+1] &&(vec[j]!='.')){
                    return false;
                }
            }
            
            vec.clear();
            
            for(int j=3;j<6;j++){
                int p = i;
                vec.push_back(board[p][j]);
                p++;
                vec.push_back(board[p][j]);
                p++;
                vec.push_back(board[p][j]);
            }
            sort(vec.begin(),vec.end());
            for(int j=0;j<board.size()-1;j++){
                if(vec[j]==vec[j+1] &&(vec[j]!='.')){
                    return false;
                }
            }
            
            vec.clear();
            
            for(int j=6;j<9;j++){
                int p = i;
                vec.push_back(board[p][j]);
                p++;
                vec.push_back(board[p][j]);
                p++;
                vec.push_back(board[p][j]);
            }
            sort(vec.begin(),vec.end());
            for(int j=0;j<board.size()-1;j++){
                if(vec[j]==vec[j+1] &&(vec[j]!='.')){
                    return false;
                }
            }
            
            vec.clear();
        }
        
        
        return true;
    }
};