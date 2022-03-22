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
    ListNode* reverseList(ListNode* head) {
        ListNode* ans = new ListNode(0);
        ListNode* curr = ans;
        
        ListNode* temp = head;

        ListNode* prev = NULL;
        ListNode* nextt;
        
        while(temp!=NULL){
            
            nextt = temp->next;
            temp->next = prev;
            prev = temp;
            temp = nextt;
            
        }
        head = prev;
        
        return head;
        
    }
};