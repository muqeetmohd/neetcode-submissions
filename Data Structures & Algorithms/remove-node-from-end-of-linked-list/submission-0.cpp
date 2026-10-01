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
        if(head->next == nullptr) return nullptr;
        int size = 1;
        ListNode* helper = head;

        while(helper->next != nullptr) {
            size++;
            helper = helper->next;
        }
        int target = size - n;
        cout<<"f"<<target<<" ";
        if(target == 0) return head->next;

        helper = head;

        while(target != 0) {
            cout<<helper->val;
            if(target == 1) {
                helper->next = helper->next->next;
            }
            helper = helper->next;
             target--;
        }

        return head;
    }
};
