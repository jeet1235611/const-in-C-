#include <iostream>
using namespace std;

int main() {
	
	const int i = 10;
	int j = 12;
	int & k = j;
	k++;
	
	cout << j << endl;
	cout << k << endl;
}
