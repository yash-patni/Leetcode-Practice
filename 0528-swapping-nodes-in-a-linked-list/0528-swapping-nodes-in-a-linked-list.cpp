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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* first=head, *second=head, *kNode=nullptr;
        for(int i=1;i<k;i++){
            first=first->next;
        }
        kNode=first;
        first=first->next;
        while(first!=nullptr){
            first=first->next;
            second=second->next;
        }

        int temp=kNode->val;
        kNode->val=second->val;
        second->val=temp;
        return head;
    }
};