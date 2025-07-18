// Last updated: 7/18/2025, 11:22:50 PM
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

ListNode* reverseLinkedList(ListNode*Head){
    ListNode* prev = nullptr;
    ListNode* curr= Head;

    while(curr){
        ListNode* next= curr->next;
        curr->next= prev;
        prev=curr;
        curr=next;
    }
    return prev;
}






    bool isPalindrome(ListNode* head) {
        if (!head || !head->next) return true;
        ListNode* fast= head;
        ListNode* slow= head;

        while(fast->next!=nullptr && fast->next->next!=nullptr){
            slow=slow->next;
            fast= fast->next->next;
        }

        ListNode* newHead = reverseLinkedList(slow->next);
        ListNode* first= head;
        ListNode* second= newHead;
        while(second){
            if(first->val != second->val){
                reverseLinkedList(newHead);
                return false;
            }

            first=first->next;
            second=second->next;


        }
        reverseLinkedList(newHead);
        return true;
        
    }
};