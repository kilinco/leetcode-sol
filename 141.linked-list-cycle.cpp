/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(!head) return false;
        // runner-up method
        ListNode *ts = head, *tf = head;
        while(tf && tf->next) { 
            tf = tf->next->next;
            ts = ts->next;
            if (tf == ts) return true;
        }
        return false;
    }
};
