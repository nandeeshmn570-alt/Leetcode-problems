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
        ListNode* temp1 = l1;
        ListNode* temp2 = l2;

        ListNode* head = NULL;
        ListNode* temp3 = NULL;
        int carry = 0;
        
        while (temp1 != NULL || temp2 != NULL || carry) {

            int sum = 0;
            if (temp1 != NULL) {
                sum += temp1->val;
                temp1 = temp1->next;
            }

            if (temp2 != NULL) {
                sum += temp2->val;
                temp2 = temp2->next;
            }

            int num = (sum + carry) % 10;
            carry = (sum + carry) / 10;

            ListNode* newNode = new ListNode(num);

            if (head == NULL) {
                head = newNode;
                temp3 = newNode;
            } else {
                temp3->next = newNode;
                temp3 = newNode;
            }
        }
        return head;
    }
};