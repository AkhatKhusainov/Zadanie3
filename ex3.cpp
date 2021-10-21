#include<iostream>
using namespace std;

void sm(int N,int D) {

	if (D > N/2) cout << N;
	else {
		if (N % D)
			sm(N,D+1);
		else {
			cout << D << "*";
			sm(N / D, 2);
		}
			
	}
}
int main() {
	int N;
	cin >> N;
	 sm(N,2);
	
}
