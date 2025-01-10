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
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(!head || k==1){
            return head;
        }
        ListNode* ans;
        ListNode*temp=head;
        int count=0;
        while(temp){
            temp=temp->next;
            count++;
            if(count==k-1){
                ans=temp;
            }
        }
        ListNode* prev= new ListNode(0, head);
        ListNode* curr=head;
        while(count>=k){
            curr=prev->next;
            ListNode* nxt=curr->next;
            for(int i=1;i<k;i++){
                curr->next=nxt->next;
                nxt->next=prev->next;
                prev->next=nxt;
                nxt=curr->next;
            }
            count-=k;
            prev=curr;
        }

        return ans;
    }
};