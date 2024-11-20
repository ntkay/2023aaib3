
//week11-4b.cpp Part2:Bopifa
#include <iostream>
using namespace std;

int main(){
	int n;
	while(cin>>n){
		if(n==0) break;

		n = f(f(f(n)));

		cout<<n<<endl;
	}
}
