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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if (lists.size() == 0) return NULL;
        vector<int> sorted;
        ListNode *head;

        lists.erase(std::remove(lists.begin(), lists.end(), nullptr), lists.end() );

        for (int i = 0; i < lists.size(); i++){
            head = lists[i];
            while(head != NULL){
                sorted.push_back(head->val);
                head = head->next;
            }
        }
        sort(sorted.begin(), sorted.end());
        std::cout<<sorted.size();
        int it=0;

        for (int i=0; i<lists.size(); i++){
            head = lists[i];
            while(head != NULL){
                if (it < sorted.size()){
                    head->val = sorted[it];
                    it++;
                }
                if (head->next == NULL && i < lists.size() - 1){
                    head->next = lists[i+1];
                    break;
                }
                head = head->next;
            }
        }

        return lists[0];
        
    }
};
