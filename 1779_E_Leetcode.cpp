class Solution {
public:
    int nearestValidPoint(int x, int y, vector<vector<int>>& points) {
        int temp = 0;
        int mini = INT_MAX;
        int z = -1;
        for(int i=0;i<points.size();i++){
            if(points[i][0]==x || points[i][1]==y){
                temp = abs(points[i][0]-x) + abs(points[i][1]-y);
                if(temp<mini){
                    mini = temp;
                    z = i;
                }
            }
        }
        return z;
    }
};