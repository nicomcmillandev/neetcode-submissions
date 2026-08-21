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
    bool hasCycle(ListNode* head) {
        ListNode* current = head;
        unordered_map<ListNode*, bool> visited;
        while(current != nullptr) {
            if(visited[current] == true) {
                return true;
            }
            visited[current] = true;
            cout << current->val;
            current = current->next;
        }
        return false;
    }
};
