class Solution {
public:
    double average(vector<int>& salary) {
        sort(salary.begin(),salary.end());
        double n = salary.size() -2;
        double ans=0;
        for(int i=1;i<salary.size()-1;i++){
            ans = ans +  salary[i];
        }
        ans = ans / n;
        return ans;
    } 
};