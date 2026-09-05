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
        ListNode*temp=head;
        long long count=0;
        if(head==NULL){
            return head;
        }
        if(head->next==NULL){
            return NULL;
        }
        while(temp!=NULL){
            count++;
            temp=temp->next;
        }
        count=count-n;
        if (count == 0) {
            ListNode* deleteNode = head;
            head = head->next;
            delete deleteNode;
            return head;
        }
        temp=head;
        while(count>1){
            temp=temp->next;
            count--;
        }
        ListNode*deleteNode = temp->next;
        temp->next=temp->next->next;
        delete deleteNode;
        return head;
    }
};