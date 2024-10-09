#include <iostream>//step1:scanf()
#include <stdio.h>//step2:out
#include <string> //step3:tolower() find()
using namespace std;
int main(){
	//step6:keyborad keys string
	string s ="`1234567890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./";
	char c; //step1:input
	while(scanf("%c",&c) == 1){
		c= tolower(c); //step3:tolower(c)
		if(c==' ' || c=='\n') cout<<c;
		else{
			int i= s.find(c);//step04:find()
			cout<<s[i-2];//step5:output s[i-2]

		}
	}
}
