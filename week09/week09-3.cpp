class Solution {
public:
    double average(vector<int>& salary) {
        sort(salary.begin(),salary.end()); //�q�p��j�Ʀn
        double total = 0; //����,���p���I
        for(int i=1;i<salary.size()-1;i++){
            //�׶},�̤psalary[0]�B�̤jsalary[N-1];
            total += salary[i];
        }
        return total / (salary.size()-2); //����
    }
};
