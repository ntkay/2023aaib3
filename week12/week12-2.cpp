class Solution {
public: //�N����� �i�ǬP�j
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        //listNode* ans = list1; // �i�H�౵(�ª�)list1 �L�h
        //ListNode* ans = new ListNode(99); //�i�H�}�s��(99)
        ListNode* ans = new ListNode(99,new ListNode(90));
        //�}�s�� Node �̭���99,�᭱�౵[�s��Node�̦�99]
        return ans ;
        //��T�ت���������L,��Test result�� red output
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
