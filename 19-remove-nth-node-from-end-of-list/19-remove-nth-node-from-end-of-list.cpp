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
        ListNode* curr = head;
        int count=0;
        if(head == NULL){
            return NULL;
        }
        else if(head->next == NULL){
            delete head;
            return NULL;
        }
        while(curr!=NULL){
            ++count;
            curr = curr->next;
        }
        curr = head;
        ListNode* prev;
        if(count == n){
            ListNode* temp = head->next;
            delete head;
            return temp;
        }
        for(int i=0;i<(count-n);i++){
            prev=curr;
            curr = curr->next;
        }
        prev->next = curr->next;
        delete curr;
        return head;
    }
};