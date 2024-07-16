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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL || head->next==NULL) return head;
        ListNode* tail=head;
        int n=1;
        while(tail->next!=NULL){
            n++;
            tail=tail->next;
        }
        if(n<=k) k=k%n;
        if(k==0) return head;
        ListNode* node=head;
        for (int i=0; i<n-k-1; i++) {
            node = node->next;
        }
        ListNode* res=node->next;
        node->next=NULL;
        tail->next=head;
        return res;
    }
};