class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> a;
        for(string s: operations){
            int N = a.size(); //���o��h�Ӽ�
            if(s=="+") a.push_back(a[N-1]+a[N-2]); //�̫�ⵧ�ۥ[
            else if(s=="D") a.push_back(a[N-1]*2); //�̫�1���ۥ[
            else if(s=="C") a.pop_back(); //�R��
            else a.push_back( stoi(s)); //�Ʀr,��
        }
        int ans = 0; //��̭������[�_��
        for(int b : a) ans += b;
        return ans;
    }
};
