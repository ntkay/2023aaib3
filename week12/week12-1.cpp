/// week12-1.cpp  compare class & struct
#include <iostream>
#include <string>
using namespace std ;

///struct Node{};
///class Cat {};
struct Node{
    int val; ///value�Y�g,�o��Node�̭�����
};
class Cat{
public:
    string name; ///�ߪ��W�r,�e�X�g�йL
};
int main(){
    Cat cat1;
    cat1.name="cattie";
    Node node;
    node.val=1;
}


