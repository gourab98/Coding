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
    ListNode* partition(ListNode* head, int x) {
        ListNode* small = new ListNode(0);
        ListNode* large = new ListNode(0);
        ListNode* smallP = small;
        ListNode* largeP = large;
        ListNode* temp = head;
        
        while(temp){
            if(temp->val <x){
                smallP->next = temp;
                smallP= smallP->next;
            }
            else{
                largeP->next = temp;
                largeP = largeP->next;
            }
            temp = temp->next;
        }
        
        smallP-> next = large->next;
        largeP->next = NULL;
        return small->next;
        
    }
};