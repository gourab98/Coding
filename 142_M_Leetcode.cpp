/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        
        if(head == nullptr){
            return nullptr;
        }
        
        while(head!= nullptr){
            if(head->next != nullptr && head->next <= head){
                return head->next;
            }
            head = head->next;
        }
        
        return nullptr;
    }
};