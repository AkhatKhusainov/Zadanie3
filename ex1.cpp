#include<iostream>
using namespace std;

void chisl(int N) {

	if (N > 0) {
		chisl(N / 10);
		cout << "  " << N % 10;
	}
}
int main() {
	int N;
	cin >> N;
	if (N) chisl(N);
	else
		cout << 0;
}
