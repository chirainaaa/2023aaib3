//week12-5.cpp
#include <iostream>
using namespace std;
int a[100][100]; //Step04: array
int main(){
	int T,N;
	char c,c2; // not important!!
	cin>>T; // Step01: Input
	for(int t=1;t<=T;t++){ //Test Case t
		cin>>c>>c2>>N; //Step01: Input
		for(int i=0;i<N;i++){
			for(int j=0;j<N;j++){
				cin>>a[i][j]; //Step03: for-loop Input
			}
		}
		int bad =0;
		for(int i=0;i<N;i++){
			for(int j=0;j<N;j++){
				if(a[i][j]<0) bad = 1;
				if(a[i][j] != a[N-1-i][N-1-j]) bad = 1;
			}
		}
		if(bad==0) cout<<"Test #"<<t<<": Symmetric.\n";
		else cout<<"Test #"<<t<<": Non-symmetric.\n";
	} //Step02: Output
}