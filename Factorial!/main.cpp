#include <iostream>
using namespace std;

int fact(int n) {
	if(n<2) return 1;
	return n*fact(n-1);
}

int main() {
	int num;
	cin >> num;    //Reading input from STDIN
	int f = fact(num);
	cout << f << endl;	// Writing output to STDOUT
}