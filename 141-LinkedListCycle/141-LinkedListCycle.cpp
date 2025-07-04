// Last updated: 7/5/2025, 3:43:03 AM
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
    bool hasCycle(ListNode *head) {
        if(head== nullptr) return false;
        ListNode* slow= head;
        ListNode* fast= head;

        while(fast!=nullptr && fast->next!=nullptr){
            slow= slow->next;
            fast= fast->next->next;
            if(slow==fast){
                return true;
            }
            
        }
        return false;
        
    }
};