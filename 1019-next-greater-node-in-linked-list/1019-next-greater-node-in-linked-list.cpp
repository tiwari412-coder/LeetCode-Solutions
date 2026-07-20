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
    vector<int> nextLargerNodes(ListNode* head) {

        ListNode* temp = head;
        vector<int> nums;

        while (temp != nullptr) {
            nums.push_back(temp->val);
            temp = temp->next;
        }

        vector<int> result;

        for (int i = 0; i < nums.size(); i++) {

            int value = 0;

            for (int j = i + 1; j < nums.size(); j++) {

                if (nums[j] > nums[i]) {
                    value = nums[j];
                    break;
                }
            }

            result.push_back(value);
        }

        return result;
    }
};