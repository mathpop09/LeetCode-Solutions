#include <vector>
#include <iostream>
using namespace std;

bool isPalindrome(int x) {
	int number = x;
	int digit = 0;
	vector<int> pal;

	while (number > 0) {
		digit = number % 10;
		number = number / 10;
		pal.push_back(digit);
	}
	bool trufal = true;
	int sizeScan = pal.size() / 2;
	// pal check
	for (int i = 0; i < sizeScan; i++) {
		if(pal[i] != pal[pal.size() - i - 1]) {
			trufal = false;
		}
	}
	//negative check
	if (x < 0) {
		trufal = false;
	}
	return trufal;; 
}

int main() {
	cout << isPalindrome(502) << endl;
}