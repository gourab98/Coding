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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        
        ListNode* ans = new ListNode(0);
        ListNode* curr = ans;
        
        ListNode* temp = list1;
        ListNode* tt = list2;
        int size = -1;
        b++; // Because Indexing is starting from "0"
        while(b--){
            size++;
            if(size >= a){
                temp=temp->next;
            }
            else
            {
            curr->next = new ListNode(temp->val);
            curr=curr->next;    
            temp = temp->next;
            }
        }
        
        while(tt){
            curr->next = new ListNode(tt->val);
            curr = curr->next;
            tt = tt->next;
        }
        while(temp){
            curr->next = new ListNode(temp->val);
            curr = curr->next;
            temp = temp->next;
        }
        return ans->next;
        
    }
};