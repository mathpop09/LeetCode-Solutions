#include<vector>
#include<iostream>
using namespace std;

bool isOneBitCharacter(vector<int>& bits) {
	int size = bits.size();
	int i = 0;
	int setter = 0;
	while (i < size) {
		if (bits[i] == 1) {
			i += 2;
			setter = 0;
		}
		else if (bits[i] == 0) {
			i++;
			setter = 1;
		}
	}
	if (setter == 0) {
		return false;
	}
	if (setter == 1) {
		return true; 
	}
}

int main () {
	vector<int> bussy = {1, 1, 1, 0};
	cout << isOneBitCharacter(bussy);
}