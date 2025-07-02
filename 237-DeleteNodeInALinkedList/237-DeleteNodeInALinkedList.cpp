// Last updated: 7/2/2025, 5:43:04 PM

class Solution {
public:
    void deleteNode(ListNode* node) {
        node->val = node-> next->val;
        ListNode* temp =node-> next;
        node-> next= node->next->next;
        delete temp;

        
        
    }
};