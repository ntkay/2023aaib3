class Solution {
public:
    char findTheDifference(string s, string t) {
        int H[256] = {}; //�}�C�W�j,���]��0
        for(char c : s){ //�w�索�䪺�r�� s�̭����C�Ӧrc
            H[c]++; //��histogram�έp�ϸ�� H[c] �[1 �h�@��
        }
        for(char c : t){ //�w��k�䪺�r�� t�̭����C�Ӧrc
            H[c]--; //�α����֭p������ H[c]++;
            if(H[c]<0) return c; //������? ������F
        }
        return 0 ;
    }
};
