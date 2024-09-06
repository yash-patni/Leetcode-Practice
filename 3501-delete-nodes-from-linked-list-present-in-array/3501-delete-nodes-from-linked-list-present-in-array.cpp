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
    bool search(vector<int>& nums, int x, int n){
        int left=0;
        int right=n-1;
        while(left<=right){
            int mid=left+(right-left)/2;
            if(nums[mid]==x) return true;
            else if(nums[mid]>x) right=mid-1;
            else left=mid+1;
        }
        return false;
    }
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        if(head==NULL) return NULL;
        int n=nums.size();
        sort(nums.begin(), nums.end());
        ListNode* temp=head;
        while(search(nums, head->val, n)){
            temp=head->next;
            head=temp;
            if(temp==NULL) return NULL;
        }
        while(temp->next!=NULL){
            if(search(nums, temp->next->val, n)){
                temp->next=temp->next->next;
            }
            else{
                temp=temp->next;
            }
        }
        return head;
    }
};