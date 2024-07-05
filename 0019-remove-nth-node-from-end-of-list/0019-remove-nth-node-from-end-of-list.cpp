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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        ListNode* first = dummy;
        ListNode* second = dummy;

        for (int i = 0; i <= n; ++i) {
            first = first->next;
        }

        // Move first to the end, maintaining the gap of n nodes
        while (first != NULL) {
            first = first->next;
            second = second->next;
        }

        // Remove the nth node from the end
        ListNode* toRemove = second->next;
        second->next = toRemove->next;
        delete toRemove;

        return dummy->next;
    }
};