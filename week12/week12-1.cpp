///week12-1.cpp �ǲ߸�Ƶ��c�� struct vs. class
#include <iostream>
#include <string> ///���FCat���W�r
using namespace std;
///struct Node {}; ///������������ c�y�������c
///class Cat{};  ///���e�X�g,���йL,��j�j
struct Node{
    int val; ///value�Y�g,�o��Node�̭�����
};
class Cat{
public:
    string name;  ///�ߪ��W�r,���e�X�g�йL
};
int main(){
    Cat cat1;
    cat1.name = "cattie";
    Node node;
    node.val = 1;
}
