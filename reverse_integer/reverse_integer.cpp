#include <iostream>
#include <sstream>
#include <string.h> 
using namespace std;

int reverse(int x) {
	int chopped = x;
	string start;
	int digit = 0;
	char dig;
	int zeroyet = 0;
	if (x < 0) {
		start += '-';
		chopped = chopped * -1;
	}
	while(chopped >= 10) {
		if (zeroyet == 0 && (chopped % 10 == 0)) {
			chopped = chopped/10;
			continue;
		}
		digit = chopped % 10;
		dig = '0' + digit;
		chopped = chopped / 10;
		start += dig;
		zeroyet++;
	}
	digit = chopped % 10;
	dig = '0' + digit;
	start += dig; 
	
	stringstream intify(start);
	int final = 0;
	intify >> final;
	//check for overflow
	if (final == 2147483647 || final == -2147483648) {
		final = 0;
	}
	return final;
}

int main() {
	cout << reverse(9999999999) << endl;
}