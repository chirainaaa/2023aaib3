//week14-1.cpp(寫一半)
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* ans = new ListNode();
        ListNode* now = ans; //模仿前2週的寫法  
        while( l1 != nullptr ){
            now -> next = new ListNode( l1 -> val );
            l1 = l1 -> next;
            now = now -> next;
        }  
        return ans -> next;
    }
};

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