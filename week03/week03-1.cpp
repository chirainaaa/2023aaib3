///week03-1.cpp �Ҹ��D��:���c�Ⱥ�,���O�L�k����
///�]�� range-based for �j�� �����b c++ (2011����)�~���
///�p�G�ϥ� c++98 (1988�~��c++) �|�L�k���T�sĶ�B����|�X���B�j��X����
///CodeBlocks 17.12 �� Setting-Compiler �ĲĤG�� -std=c++11
#include <iostream>
#include <string>
using namespace std;
int main(){
	string s;
	cin>>s;
	for(char c : s){
		if(c!='2') cout<<c;
	}
	cout<<"\n";
}
