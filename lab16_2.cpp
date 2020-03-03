#include<iostream>
using namespace std;

char myString(char *p,int N){
    char *R = new char;
    for(int i=0; i<N; i++){
        R[i] = 'A'+i;
        cout << R[i];
    }
}

int main(){
	char *p;
	int N;
	cout << "N = ";
	cin >> N;
	myString(p,N);
	cout << p;
	delete [] p;
	return 0;
}

