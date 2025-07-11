// Last updated: 7/5/2025, 2:50:00 AM
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
    ListNode* middleNode(ListNode* head) {
        if(!head)return nullptr;
        ListNode* slow= head;
        ListNode* fast= head;

        while(fast!=nullptr && fast->next!=nullptr){
            slow= slow->next;
            fast= fast->next->next;
        }
        return slow;

        
    }
};