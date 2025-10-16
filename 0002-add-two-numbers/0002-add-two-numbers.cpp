class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* dummyHead = new ListNode(-1);
        ListNode* curr = dummyHead;
        ListNode* temp1 = l1;
        ListNode* temp2 = l2;
        int carry = 0;

        while (temp1 != nullptr || temp2 != nullptr) {
            int sum = carry;
            if (temp1) sum += temp1->val;
            if (temp2) sum += temp2->val;

            carry = sum / 10;
            sum = sum % 10;

            ListNode* newNode = new ListNode(sum);
            curr->next = newNode;
            curr = curr->next;

            if (temp1) temp1 = temp1->next;
            if (temp2) temp2 = temp2->next;
        }

        if (carry > 0) {
            curr->next = new ListNode(carry);
        }

        return dummyHead->next;
    }
};
