class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> a;
        for(string s: operations){
            int N = a.size(); //Τ硂或计
            if(s=="+") a.push_back(a[N-1]+a[N-2]); //程ㄢ掸
            else if(s=="D") a.push_back(a[N-1]*2); //程1掸
            else if(s=="C") a.pop_back(); //奔
            else a.push_back( stoi(s)); //计,峨
        }
        int ans = 0; //р柑场癬ㄓ
        for(int b : a) ans += b;
        return ans;
    }
};
