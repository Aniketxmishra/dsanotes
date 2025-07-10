// Last updated: 7/11/2025, 12:41:06 AM
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
    ListNode* deleteMiddle(ListNode* head) {
        if(!head || !head->next)return nullptr;
        
        ListNode* fast= head;
        ListNode* slow= head;
        ListNode* temp = nullptr;
        while(fast!= nullptr && fast->next !=nullptr){
            temp=slow;
            slow=slow->next;
            fast= fast->next->next;
        }
        temp->next = slow->next;
        delete slow;
        return head;
    }
};