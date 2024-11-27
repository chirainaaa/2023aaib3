//week12-2.cpp(還沒寫完)
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
public: // *代表指標,老師把它叫槍上,用來瞄準的準星
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        //ListNode* ans = list1;  //可轉接(舊的)list1過去
        //ListNode* ans = new ListNode(99); //可開新的(放99)
        ListNode* ans = new ListNode(99,new ListNode(90));
        //開新的 Node 裡面放99,後面轉接「新的Node裡面有90」
        return ans;
    }  //把三種版本都執行過,看 Test Result裡面紅色Output
};