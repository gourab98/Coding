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
    ListNode* removeElements(ListNode* head, int val) {
        if(head==NULL) return NULL;
        ListNode* ans = new ListNode(0);
        ListNode* curr = ans;
        
        ListNode* p = head;
        
        while(p!=NULL){
            if(p->val != val){
                curr->next = new ListNode(p->val);
                curr= curr->next;
            }
            p = p->next;
        }
        return ans->next;
        
    }
};