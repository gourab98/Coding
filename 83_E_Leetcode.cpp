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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL || head->next == NULL) return head;
        ListNode* ans = new ListNode(-10000);
        ListNode* curr = ans;
        ListNode* p = head;
        while(p!=NULL && p->next!=NULL){
            if(p->val == p->next->val){
                p=p->next;
            }
            else{
                curr->next = new ListNode(p->val);
                curr = curr-> next;
                p=p->next;
            }
        }
        if(curr->val!=p->val){
            curr->next = new ListNode(p->val);
        }
        
        return ans->next;
    }
};