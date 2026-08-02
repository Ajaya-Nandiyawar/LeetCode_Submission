class Solution {
public:
    ListNode* addTwoNumbers(ListNode* first, ListNode* second) {
        ListNode dummy(0);
        ListNode* tail = &dummy;
        int carry = 0;

        while (first || second || carry) {
            int total = carry;

            if (first) {
                total += first->val;
                first = first->next;
            }

            if (second) {
                total += second->val;
                second = second->next;
            }

            carry = total / 10;
            tail->next = new ListNode(total % 10);
            tail = tail->next;
        }

        return dummy.next;
    }
};