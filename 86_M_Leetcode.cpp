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
    ListNode* partition(ListNode* head, int x) {
        
        ListNode* ans = new ListNode(0);
        ListNode* curr = ans;
        
        ListNode* p = head;
        ListNode* q = head;
        
        while(p){
            if(p->val < x){
            curr->next = new ListNode(p->val);
                curr = curr->next;
                }
            p = p->next;
        }
        
        while(q){
            if(q->val >= x ){
            curr->next = new ListNode(q->val);
                curr = curr->next;
                }
            q = q->next;
        }
        
        return ans->next;
    }
};