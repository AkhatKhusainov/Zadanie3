#include<iostream>
using namespace std;

int chisl(int N,int n) {
	int Sum = 0;
	if(N>0){
		
		Sum =(N % 10)* (pow(2, n));
		n++;
		N =N/ 10;
	
		Sum+=chisl(N,n);
		
	}
	
	return Sum;

}
int main() {
	int N;
	
	cin >> N;
	
	 
	 cout << chisl(N,0);
}
