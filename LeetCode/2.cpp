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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *add = new ListNode(0);
        ListNode *head1=l1;
        ListNode *head2=l2;
        add->next = NULL;
        int carry=0, value=0, node=0;
        while (l1 != NULL && l2 != NULL){
            value = l1->val + l2->val + carry;
            l1->val = value % 10;
            l2->val = value % 10;
            if (value > 9) carry = 1;
            else carry = 0;
            if (l1->next == NULL && l2->next == NULL && carry == 1) { l1->next = add;}
            l1 = l1->next;
            l2 = l2->next;
        }
        
        
        while (l1 != NULL){
            node = 1;
            value = l1->val + carry;
            l1->val = value % 10;
            if (value > 9) carry = 1;
            else carry = 0;
            if (l1->next == NULL && carry == 1) { l1->next = add;}
            l1 = l1->next;
        }
        while (l2 != NULL){
            node = 2;
            value = l2->val + carry;
            l2->val = value % 10;
            if (value > 9) carry = 1;
            else carry = 0;
            if (l2->next == NULL && carry == 1){ l2->next = add; }
            l2 = l2->next;
            
        }
        
        if (node==1) return head1;
        else if (node==2) return head2;
        
        return head1;

    }
};
