#include <iostream>
#include <vector>
using namespace std;
int main(){
	int T,N;
	cin>>T;
	for(int t=0;t<T;t++){
		cin>>N;
		vector<int> a(N);
		for(int i=0;i<N;i++){
			cin>>a[i];
			cout<<a[i]<<" ";
			}
		cout<<endl;
		cout<<"Optimal train swapping take "<<t<<" swaps."<<endl;
	}
}
