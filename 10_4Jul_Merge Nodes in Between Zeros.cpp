class Solution {
public:
    ListNode* mergeNodes(ListNode* head) {
        int sum = 0;
        ListNode* p1 =
            head->next;    // p1 starts from the node after the initial 0
        ListNode* p2 = p1; // p2 is used to traverse and sum the nodes

        while (p2 != nullptr) {
            sum = 0;
            // Traverse until we hit the next 0, summing the values
            while (p2 != nullptr && p2->val != 0) {
                sum += p2->val;
                p2 = p2->next;
            }
            // Set the value of p1 to the sum and move p1 to the next segment
            p1->val = sum;
            p1->next = p2 ? p2->next : nullptr;
            p1 = p1->next;
            if (p2) {
                p2 = p2->next;
            }
        }

        return head->next;
    }
};