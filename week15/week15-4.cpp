// week5 4.cpp  學生練習 Linked List 加法
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        l1 = myReverse(l1);
        l2 = myReverse(l2);
        
        ListNode * ans = new ListNode(0);
        ListNode * now = ans;
        int carry = 0;
        
        while(l1 != nullptr || l2 != nullptr){
            if(l1 != nullptr && l2 != nullptr){
                int here = l1->val + l2->val + carry;
                now->next = new ListNode(here % 10); //只留個位數的數字
                carry = here / 10; //取得進位
                l1 = l1->next;
                l2 = l2->next;
            }
            else if(l1 != nullptr){
                int here = l1->val + carry;
                now->next = new ListNode(here % 10);
                carry = here / 10;
                l1 = l1->next;
            }
            else {
                int here = l2->val + carry;
                now->next = new ListNode(here % 10);
                carry = here / 10;
                l2 = l2->next;
            }
            now = now->next;
        }
        if(carry > 0) now->next = new ListNode(carry);
        return myReverse(ans->next);
    }
    
    ListNode* myReverse(ListNode* l1){ // 補單：自己訂函式
        vector<int> a;
        while(l1 != nullptr){
            a.push_back(l1->val);
            l1 = l1->next; //下一筆
        }
        ListNode * ans = new ListNode();
        ListNode * now = ans;
        int n = a.size();
        for(int i = n-1; i >= 0; i--){
            now->next = new ListNode(a[i]);
            now = now->next;
        }
        return (ans->next);
    }
};
