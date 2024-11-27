class Solution {
public: //代表指標 【準星】
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        //listNode* ans = list1; // 可以轉接(舊的)list1 過去
        //ListNode* ans = new ListNode(99); //可以開新的(99)
        ListNode* ans = new ListNode(99,new ListNode(90));
        //開新的 Node 裡面放99,後面轉接[新的Node裡有99]
        return ans ;
        //把三種版本都執行過,看Test result的 red output
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
