#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
	//stpe03:
	char s[]="`1234567890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./";
	char c ;
	//step01:input
	while(scanf("%c",&c) == 1 ){
		c = tolower(c);
		if(c==' ' || c=='\n') printf("%c",c);
		else{
			c=*(strchr(s,c)-2);
			printf("%c",c);

		}
		//printf("%c",c);//step02:output
	}
}
