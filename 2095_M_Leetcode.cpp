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
    ListNode* deleteMiddle(ListNode* head) {
        if(head == NULL || head->next == NULL) return NULL;
        ListNode* ans = new ListNode(0);
        ListNode* curr = ans;
        ListNode* p = head;
        ListNode* q = head;
        
        int size=0;
        while(p!=NULL){
            size++;
            p=p->next;
        }
        int k =size/2 +1;
        int j=0;
        while(q!=NULL){
            j++;
            if(j!=k){
                curr->next = new ListNode(q->val);
                curr = curr->next;
            }
            
            q=q->next;
        }
        
        return ans->next;
        
    }
};