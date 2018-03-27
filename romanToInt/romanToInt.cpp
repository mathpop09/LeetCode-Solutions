#include <string>
#include <iostream>
using namespace std;

int romanToInt(string s) {
    int size = s.size();
    int lastLet = 99999;
    int retInt = 0;
    for(int i = 0; i < size; i++) {
    	if (s[i] == 'M') {
    		retInt += 1000;
    		if (lastLet == 3) {
    			retInt -= 200;
    		}
    		lastLet = 1;
    	}
    	else if (s[i] == 'D') {
    		retInt += 500;
    		if (lastLet == 3) {
    			retInt -= 200;
    		}
    		lastLet = 2;
    	}
    	else if (s[i] == 'C') {
    		retInt += 100;
    		if (lastLet == 5) {
    			retInt -= 20;
    		}
    		lastLet = 3;
    	}
    	else if (s[i] == 'L') {
    		retInt += 50;
    		if (lastLet == 5) {
    			retInt -= 20;
    		}
    		lastLet = 4;
    	}
    	else if (s[i] == 'X') {
    		retInt += 10;
    		if (lastLet == 7) {
    			retInt -= 2;
    		}
    		lastLet = 5;
    	}
    	else if (s[i] == 'V') {
    		retInt += 5;
    		if (lastLet == 7) {
    			retInt -= 2;
    		}
    		lastLet = 6;
    	}
    	else if (s[i] == 'I') {
    		retInt += 1;
    		lastLet = 7;
    	}

    }
    return retInt;
}

int main() {
	cout << romanToInt("MMCCCXCIX") << endl;
}