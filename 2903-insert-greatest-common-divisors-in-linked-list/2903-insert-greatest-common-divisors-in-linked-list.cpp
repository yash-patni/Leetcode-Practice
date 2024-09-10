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
int gcd(int a, int b)
{
    int result = min(a, b);
    while (result > 0) {
        if (a % result == 0 && b % result == 0) {
            break;
        }
        result--;
    }
    return result;
}
ListNode* insertGreatestCommonDivisors(ListNode* head) {
    ListNode* temp=head;
    while(temp->next!=NULL){
        int x=gcd(temp->val, temp->next->val);
        ListNode *newnode=new ListNode(x);
        newnode->next=temp->next;
        temp->next=newnode;
        temp=temp->next->next;
    }
    return head;
}
};