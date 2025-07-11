// Last updated: 7/5/2025, 2:31:48 AM
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
        ListNode* prev= nullptr;
        ListNode* next= nullptr;
        ListNode* curr= head;
        while(curr!=nullptr){
            next = curr->next;
            curr->next= prev;
            prev= curr;
            curr= next;
        }

        return prev;
    }
};