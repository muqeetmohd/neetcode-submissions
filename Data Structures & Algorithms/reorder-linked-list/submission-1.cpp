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
    void reorderList(ListNode* head) {
        if(head->next == nullptr) return;
        ListNode* first = head;
        ListNode* last = head;
        int size = 0;

        while(last->next != nullptr) {
            last = last->next;
            size++;
        }
        cout<<size;

        bool isFirst = true;

        ListNode* temp;

        while(size != 0) {
            if(isFirst) {
              temp = first->next;
              first->next = last;
              isFirst = false;
            } else {
                last->next = temp;
                first = temp;
                last = temp;
                while(last->next->next != first){
                    last=last->next;
                }
                isFirst = true;
            }
            size--;
            if(size == 0){
                last->next = nullptr;
            }
        }

        
    }
};
