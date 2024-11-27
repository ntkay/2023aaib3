/// week12-1.cpp  compare class & struct
#include <iostream>
#include <string>
using namespace std ;

///struct Node{};
///class Cat {};
struct Node{
    int val; ///value縮寫,這個Node裡面的值
};
class Cat{
public:
    string name; ///貓的名字,前幾週教過
};
int main(){
    Cat cat1;
    cat1.name="cattie";
    Node node;
    node.val=1;
}


