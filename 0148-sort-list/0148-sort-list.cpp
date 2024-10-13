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
    ListNode* sortList(ListNode* head) {
        if(head==NULL || head->next==NULL){
            return head;
        }
        vector<int> lst;
        ListNode* temp=head;
        while(temp!=NULL){
            lst.push_back(temp->val);
            temp=temp->next;
        }
        sort(lst.begin(), lst.end());
        temp=head;
        int i=0;
        while(temp!=NULL){
            temp->val=lst[i];
            temp=temp->next;
            i++;
        }
        return head;
    }
};