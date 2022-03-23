class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int> vec;
        if(n%2!=0) {
            vec.push_back(0);
            n--;
        }
        int i = 1;
        n = n/2;
        while(n--){
            vec.push_back(i);
            vec.push_back(-i);
            i++;
        }
        return vec;
    }
};