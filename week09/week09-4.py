class Solution:
    def lemonadeChange(self, bills: List[int]) -> bool:
        b5,b10,b20=0,0,0 #�@�}�l0
        for b in bills: #�ΰj��,�C�C���r��
            if b==5:  #�ȤH��5���A���Χ�
                b5+=1 #������5���_��
            elif b==10: #�ȤH��10���A�n���
                if b5==0: return False #�S5���A����
                b10+=1 #�S���ѴN����
                b5-=1 #�A��5
            else: #�̫�O20
                if b10>0 and b5>0: #�Ĥ@�ا�k:10+5
                    b20+=1
                    b10-=1
                    b5-=1
                elif b5>=3: #�ĤG�� 5*3
                    b20+=1
                    b5-=3
                else: #������䪺��
                    return False
        return True
