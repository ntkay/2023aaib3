int main() {
    int a,b;
    vector<int> A,B;
    while(cin>>a>>b){
        A.push_back(a); // ��Ʀra��J�}�CA
        B.push_back(b); // ��Ʀrb��J�}�CB
    }
    sort(A.begin(),A.end() ); //�ؼ�:��A�q�p��j�Ʀn
    sort(B.begin(),B.end() ); //�ؼ�:��B�q�p��j�Ʀn
    int ans = 0;
    for(int i=0;i<A.size();i++){
        cout<<A[i]<<" "; //�L�X�ӯu���O�q�p��j�Ʀn
        ans += abs(A[i] - B[i]); //�۴�,�u������
    }
    cout<<"�[�_�Ӫ����׬O"<<ans;
}
