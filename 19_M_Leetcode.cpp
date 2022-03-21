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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* ans= new ListNode(0);
        ListNode* p = head;
        ListNode* q = head;
        ListNode* curr = ans;
        int t = 0;
        int i=0;
        while(p!=NULL){
            t++;
            p=p->next;
        }
        int k = t-n+1;
        while(q!=NULL){
            i++;
            if(k!=i){
            curr->next = new ListNode(q->val);
            curr=curr->next;    
                }
            q=q->next;
            
        }
        
        return ans->next;
    }
};