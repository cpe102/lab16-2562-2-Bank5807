#include<iostream>
#include<cstdlib>
#include<ctime>
#include<vector>
using namespace std;

vector<int> randomVector(int);
void showVector(vector<int>);
int dotProduct(vector<int>,vector<int>);

int main(){
	srand(time(0));
	vector<int> x = randomVector(5);
	vector<int> y = randomVector(5);
	int z = dotProduct(x,y);
	showVector(x);
	cout << " . ";
	showVector(y);
	cout << " = " << z;

	return 0;
}

vector<int> randomVector(int x){
    vector<int> a(x);
    for(unsigned int i=0; i<a.size(); i++){
        a[i] = rand()%10;
    }
    return a;
}
void showVector(vector<int> x){
    cout << "[";
    for (unsigned int i=0; i<x.size(); i++){
        cout << x[i+1] << " ";
    }
    cout << "]";
}
int dotProduct(vector<int> A, vector<int> B){
    int result;
    for(unsigned int i=0; i<A.size(); i++){
        result += A[i]*B[i];
        }
          return result;
    }

