class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int b5=0,b10=0,b20=0;
        for(int b : bills){
            if(b==5) b5++; //��10��,�������_��
            else if(b==10){ //��10��,�ݯण���
                if(b5==0) return false ;//�S�����i�H��
                b10++; //�h�F�@�i 10���r
                b5--; //�֤F�@�i5���r
            }else { //���@�i20�A��L�@�i10�B�@�i5
                if(b10>0 && b5>0){
                    b20++;
                    b10--;
                    b5--;
                }else if(b5>=3){
                    b20++;
                    b5-=3;
                } else return false;
            }
        }
        return true;
    }
};
