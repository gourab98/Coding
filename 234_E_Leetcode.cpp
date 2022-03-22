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
    bool isPalindrome(ListNode* head) {
    
        stack<int> s;
        ListNode* temp = head;
        ListNode* man = head;
        
        while(temp!=NULL){
            int a = temp->val;
            s.push(a);
            temp=temp->next;
        }
        while(man){
            int b = s.top();
            s.pop();
            int c = man->val;
            if(b!=c) return false;
            
            man = man->next;
        }
        return true;
     }
};