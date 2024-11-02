class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int ans = 0; //最有錢的有言人,有多少錢
        for(auto a : accounts){ //從一堆人,找出一個人a
            int sum=0; //迴圈前面,sum=0
            for(auto b : a){ //a[0]+a[1]+a[2]+...
                sum+=b; //迴圈中間 sum+=b 越加越多
            } //迴圈後面,看這個人的存款總數,是否更有錢
            if(sum>ans) ans=sum; //更有錢,就更新 ans
        }
        return ans; //迴圈後面,ans拿來用
    }
};
