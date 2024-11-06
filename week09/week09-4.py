class Solution:
    def lemonadeChange(self, bills: List[int]) -> bool:
        b5,b10,b20=0,0,0 #一開始0
        for b in bills: #用迴圈,慢慢收鈔票
            if b==5:  #客人拿5元，不用找
                b5+=1 #直接把5收起來
            elif b==10: #客人拿10元，要找錢
                if b5==0: return False #沒5元，失敗
                b10+=1 #沒失敗就收錢
                b5-=1 #再找5
            else: #最後是20
                if b10>0 and b5>0: #第一種找法:10+5
                    b20+=1
                    b10-=1
                    b5-=1
                elif b5>=3: #第二種 5*3
                    b20+=1
                    b5-=3
                else: #都不能找的話
                    return False
        return True
