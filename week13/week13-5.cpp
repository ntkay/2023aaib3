class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode * ans = new ListNode(); //�ǳƦn�s��
        ListNode * now = ans; //�{�b�n�B�z��listNode �Oans���U��
        while(list1 != nullptr || list2 != nullptr){ //�u�n�٦��@���٦���
            if(list1==nullptr){ //list1 �O�Ū�
                now->next = list2; //���Wlist2
                list2 = nullptr; //list2�]�M��
            }else if(list2==nullptr){ //list2�O�Ū�
                now->next = list1; //�N���Wlist1
                list1 = nullptr; //list1�N�M��
            }else{
                if(list1->val < list2->val){ //����list1�p
                    now->next = new ListNode(list1->val);
                    list1 = list1->next;
                }else{ //�[�� list2�p
                    now->next = new ListNode(list2->val);
                    list2 = list2->next;
                }
                now = now->next;
            }
        }
        return ans->next;
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
