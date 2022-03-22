/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    int pairSum(ListNode* head) {
        
        ListNode* curr = head;
        ListNode* temp = head;
        stack<int> st;
        
        int size= 0;
        while(temp){
            int a = temp->val;
            st.push(a);
            size++;
            temp = temp->next;
        }
        int k = size/2;
        int max = 0;
        
        while(k--){
            int big = curr->val + st.top();
            if(max < big){
                max = big;
            }
            st.pop();
            curr=curr->next;
        }
        return max;
    }
};