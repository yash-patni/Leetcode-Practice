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
    void insertionSort(vector<int>& arr){
        int n=arr.size();
        for(int i=1; i<n; i++){
            int key=arr[i];
            int j=i-1;
            while(j>=0 && key<arr[j]){
                arr[j+1]=arr[j];
                j--;
            }
            arr[j+1]=key;
        }
    }
    ListNode* insertionSortList(ListNode* head) {
        ListNode* temp=head;
        if(head==NULL || head->next==NULL){
            return head;
        }
        vector<int> arr;
        while(temp!=NULL){
            arr.push_back(temp->val);
            temp=temp->next;
        }
        insertionSort(arr);
        temp=head;
        int k=0;
        while(temp!=NULL){
            temp->val=arr[k];
            k++;
            temp=temp->next;
        }
        return head;

    }
};