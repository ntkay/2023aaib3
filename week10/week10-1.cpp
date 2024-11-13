#include <iostream>
using namespace std;
int main(){
	double a,b;
	cin>>a>>b;
	double BMI=b/(a*a);
	if(BMI>=18.5 && BMI<24)
		cout<<BMI<<endl<<"standard";
	else if (BMI>=24)
		cout<<BMI<<endl<<"too fat";
	else
		cout<<BMI<<endl<<"too thin";
}
