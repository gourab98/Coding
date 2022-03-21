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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* ans = new ListNode(0);
        ListNode* curr = ans;
        ListNode* p = head;
        ListNode* q = head;
        ListNode* c = head;
        int size = 0;
        int first = 0;
        int last = 0;
        while(p!=NULL){
            size++;
            if(size==k){
                first = p->val;
            }
            p= p->next;
        }
        int i = 0;
        while(q!=NULL){
            i++;
            if(i== size-k+1){
                last = q->val;
            }
            q= q->next;
        }
        int j=0;
        while(c!=NULL){
            j++;
            if(j==k){
                curr->next = new ListNode(last); 
                curr = curr->next;
            }
            else if(j==size-k+1){
                curr->next = new ListNode(first);
                curr = curr->next;
            }
            else {curr->next = new ListNode(c->val);
                 curr = curr->next;}
            c=c->next;
            
        }
        
        return ans->next;
        
    }
};