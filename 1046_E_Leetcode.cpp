class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> pq;
        for(int i=0;i<stones.size();i++){
            pq.push(stones[i]);
        }
        while(pq.size()>1){
            int a;
            a = pq.top();
            pq.pop();
            int b;
            b = pq.top();
            pq.pop();
            if(a-b>0){
                pq.push(a-b);
            }
        }
        if(pq.size()==1) return pq.top();
        else return 0;

    }
};