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
    ListNode* reverseList(ListNode* head) {
        /*stack<int>st;
        if(head==NULL){
            return NULL;
        }
        ListNode*temp=head;
        while(temp!=NULL){
            st.push(temp->val);
            temp=temp->next;
        }
        ListNode*temp1=head;
        while(temp1!=NULL){
            int topVal=st.top();
            temp1->val=topVal;
            st.pop();
            temp1=temp1->next;
        }
        return head;*/

        ListNode*temp=head;
        ListNode*prev=NULL;
        while(temp!=NULL){
            ListNode*front=temp->next;
            temp->next=prev;
            prev=temp;
            temp=front;
        }
        return prev;
    }
};