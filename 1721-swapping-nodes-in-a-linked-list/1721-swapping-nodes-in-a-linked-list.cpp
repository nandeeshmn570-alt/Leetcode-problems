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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* first = head;
        ListNode* second = head;

        for (int i = 0; i < k - 1; i++) {
            first = first->next;
        }

        ListNode* third = first;
        first = first->next;
        while (first != NULL) {
            first = first->next;
            second = second->next;
        }
        int temp = third->val;
        third->val = second->val;
        second->val = temp;
        return head;
    }
};