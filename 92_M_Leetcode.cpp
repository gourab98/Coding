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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
     
        ListNode* ans = new ListNode(0);
        ListNode* curr = ans;
        
        ListNode* prev = NULL;
        ListNode* temp = head;
        ListNode* nextt;
        
        int size = 0;
        int time = right;
        while(right--){
            size++;
            if(size>= left){
                nextt = temp->next;
                temp->next = prev;
                prev = temp;
                temp = nextt;
            }
            else{
            curr->next = new ListNode(temp->val);
            curr = curr->next;
            temp = temp->next;    
            }
        }
        
        while(prev){
            curr->next = new ListNode(prev->val);
            curr = curr->next;
            prev = prev->next;
        }
        while(temp){
            curr->next = new ListNode(temp->val);
            curr = curr->next;
            temp = temp->next;
        }
        
        return ans->next;
        
    }
};