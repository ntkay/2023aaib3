#include <iostream>
using namespace std;
int a[100][100];
int main(){
	int T, N, now;
	char c, c2; //not important
	cin >> T; //steo1:input
	for(int t=1; t<=T; t++){ //Test case t
		cin>> c >> c2 >> N; //step1:input
		for(int i=0; i<N; i++){
			for(int j=0; j<N; j++){
				cin>>a[i][j]; //step3 for-loop input
			}
		}
		int bad = 0;
		for(int i=0;i<N;i++){
			for(int j=0;j<N;j++){
				if(a[i][j]<0) bad = 1;
				if(a[i][j] != a[N-1-i][N-1-j]) bad = 1;
			}
		}
		if(bad==0) cout<<"Test #"<<t<<": Symmetric.\n";
		else cout<<"Test #"<<t<<": Non-symmetric.\n";
	} //step2 :output
}
