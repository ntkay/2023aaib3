int main() {
    int a,b;
    vector<int> A,B;
    while(cin>>a>>b){
        A.push_back(a); // 把數字a放入陣列A
        B.push_back(b); // 把數字b放入陣列B
    }
    sort(A.begin(),A.end() ); //目標:把A從小到大排好
    sort(B.begin(),B.end() ); //目標:把B從小到大排好
    int ans = 0;
    for(int i=0;i<A.size();i++){
        cout<<A[i]<<" "; //印出來真的是從小到大排好
        ans += abs(A[i] - B[i]); //相減,只取正的
    }
    cout<<"加起來的答案是"<<ans;
}
