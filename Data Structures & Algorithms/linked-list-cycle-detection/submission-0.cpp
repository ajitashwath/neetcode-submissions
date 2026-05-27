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
    bool hasCycle(ListNode *head) {
        // Floyd's Cycle Detection Algorithm
        // fast -> 2 steps // slow -> 1 step
        if(head == NULL || head -> next == NULL) return false;
        ListNode* slow = head;
        ListNode* fast = head -> next;
        while(fast != slow) {
            if(fast -> next == NULL || fast -> next -> next == NULL) return false;
            slow = slow -> next;
            fast = fast -> next -> next;
        }
        return true;
    }
};
