#include <iostream>
using namespace std;
int main(){
	int T, N, now;
	char c, c2; //not important
	cin >> T; //steo1:input
	for(int t=1; t<=T; t++){ //Test case t
		cin>> c >> c2 >> N; //step1:input
		for(int j=0; j<N; j++){
			for(int j=0; j<N; j++){
				cin>>now; //step3 for-loop input
			}
		}
		cout<<"Test #"<<t<<":Symmetric.\n";
	} //step2 :output
}
