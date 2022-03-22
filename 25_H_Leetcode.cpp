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
    ListNode* reverseKGroup(ListNode* head, int k) {
         if(head == NULL) return NULL;
        
        ListNode* ans = new ListNode(0);
        ListNode* curr = ans;
        
        ListNode* temp = head;
        ListNode* ext = head;

        ListNode* prev = NULL;
        ListNode* nextt;
        
        int size = 0;
        while(ext!=NULL){
            size++;
            ext= ext->next;
        }
        int p = size/k;
        int l = k;
        
        while(p--){
            
        while(l--){
            nextt = temp->next;
            temp->next = prev;
            prev = temp;
            temp = nextt;
            
        }
        
        while(prev!=NULL){
            curr->next= new ListNode(prev->val);
            curr = curr->next;
            prev = prev->next;
            
        }
            l = k;
        }
        while(temp!=NULL){
            curr->next= new ListNode(temp->val);
            curr = curr->next;
            temp = temp->next;
        }
       
        
        return ans->next;
    }
};