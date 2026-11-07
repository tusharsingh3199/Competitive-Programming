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
        stack<int>s;
        vector<int> ans;
        ListNode* h=head;

        while(h!=nullptr){
            s.push(h->val);
            if (s.size()==k){
                for(int i=0; i<k; i++){
                    int temp=s.top();
                    ans.push_back(temp);
                    s.pop();
                }
            }
            h=h->next;
        }
        h=head;
        for (int i=0; i<ans.size(); i++){
            h->val = ans[i];
            h = h->next;
        }
        return head;
    }
   
};
