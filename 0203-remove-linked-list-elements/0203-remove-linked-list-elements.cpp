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
    ListNode* removeElements(ListNode* head, int val) {
        if (head == NULL) {
            return NULL;
        }
        ListNode* temp = head;
        ListNode* prev = NULL;

        while (temp != NULL) {
            if (temp->val == val && prev == NULL) {
                ListNode* del = temp;
                head = head->next;
                temp = temp->next;
                del->next = NULL;
                delete del;
            }
            else if (temp->val == val && temp->next == NULL) {
                prev->next = NULL;
                ListNode*del = temp;
                temp = temp->next;
                delete del;
            } else if (temp->val == val && temp->next != NULL) {
                ListNode* del = temp;
                temp = temp->next;
                prev->next = temp;
                delete del;
            }
            else {
                prev = temp;
                temp = temp->next;
            }
        }
        return head;
    }
};