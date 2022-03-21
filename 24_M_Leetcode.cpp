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
    ListNode* swapPairs(ListNode* head) {
        if(head == NULL) return NULL;
        ListNode* ans =  new ListNode(0);
        ListNode* curr = ans;
        
        int first = 0;
        int last = 0;
        ListNode* p = head;
        while(p!=NULL){
            if(p->next!=NULL){
                first = p->val;
                p=p->next;
                last = p->val;
                p=p->next;
                curr->next = new ListNode(last);
                curr = curr->next;
                curr->next = new ListNode(first);
                curr = curr->next;
            }
            else {
                curr->next = new ListNode(p->val);
                p=p->next;
            }
            
        }
        
        
        return ans->next;
    }
};