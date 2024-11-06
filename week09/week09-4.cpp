class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int b5=0,b10=0,b20=0;
        for(int b : bills){
            if(b==5) b5++; //拿10元,直接收起來
            else if(b==10){ //拿10元,看能不能找
                if(b5==0) return false ;//沒有錢可以找
                b10++; //多了一張 10元鈔
                b5--; //少了一張5元鈔
            }else { //拿一張20，找他一張10、一張5
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
