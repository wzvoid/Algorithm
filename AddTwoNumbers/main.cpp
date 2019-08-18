#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;

    explicit ListNode(int x) : val(x), next(nullptr) {}
};

class Solution {
public:
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2) {
        int carry = 0;
        ListNode *l3 = nullptr, *p3 = l3;

        while (l1 || l2) {
            if (l1) {
                carry += l1->val;
                l1 = l1->next;
            }
            if (l2) {
                carry += l2->val;
                l2 = l2->next;
            }
            ListNode *temp = new ListNode(carry % 10);
            carry /= 10;

            if (l3 == nullptr) {
                l3 = p3 = temp;
            } else {
                p3->next = temp;
                p3 = p3->next;
            }
        }

        if (carry == 1) {
            ListNode *end = new ListNode(1);
            p3->next = end;
        }

        return l3;
    }

    ListNode *createListNode(vector<int> &v) {
        ListNode *head = nullptr, *p = head;
        for (vector<int>::size_type i = 0; i < v.size(); ++i) {
            ListNode *temp = new ListNode(v[i]);
            if (head == nullptr) {
                head = p = temp;
            } else {
                p->next = temp;
                p = p->next;
            }
        }
        return head;
    }

    void print(ListNode *head) {
        if (head) {
            while (head) {
                cout << head->val << " ";
                head = head->next;
            }
        }
    }
};

/*
 * Several typical test cases:
 * 3-4-6
 * 5-7-1
 * +
 * ----------
 * 8-1-8
 *
 * 3-4-6
 * 5-7-3
 * +
 * ----------
 * 8-1-0-1
 *
 * 3-4-6
 * 5-7-6-1
 * +
 * ----------
 * 8-1-3-2
 *
 * 3-4-6
 * 5-7-6-9
 * +
 * ----------
 * 8-1-3-0-1
 *
 *
 */

int main() {
    Solution s;
    vector<int> v1{3, 4, 6}, v2{5, 7, 6, 1};
    s.print(s.addTwoNumbers(s.createListNode(v1), s.createListNode(v2)));
    return 0;
}