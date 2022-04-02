class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& co) {
       if(co.size()==2) return true;
        
        int x;
        int y;
        int x1 = co[0][0];
        int y1 = co[0][1];
        int x2 = co[1][0];
        int y2 = co[1][1];
        
        //slope: (x-x1)/(x2-x1) = (y-y1)/(y2-y1);
        
        for(int i=2;i<co.size();i++){
            x = co[i][0];
            y = co[i][1];
            
            if (((x-x1)*(y2-y1))!=((y-y1)*(x2-x1))) return false;
        }
        
        return true;
    }
};