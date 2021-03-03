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
    ListNode* rotateRight(ListNode* head, int k) {
		if (head == NULL) return head;	
		int c = 1;
		ListNode* tmp = head;
		while(tmp->next != NULL){
			c++;
			tmp = tmp->next;
		}	
		tmp->next = head;
		k = k % c;
		tmp = head;
	    while( ++k != c ) tmp = tmp->next;
		head = tmp->next;
		tmp->next = NULL;
		return head;	
    }
};
