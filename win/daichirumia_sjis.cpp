#include <iostream>
#include <random>

using namespace std;

int main() {
	random_device rng;
	cout << "��������[�݂������@";
	long int daichirumia[10] = { 0 };
	daichirumia[8] = 10;
	int check[7] = { 0 };
	for (int i = 1; i <= 7; i++) {
		cout << "\ntrying" << i <<' ';
		int tmp = 0;
		do {
			tmp = rng();
		} while (tmp <= 0);
		tmp %= 7;
		cout << tmp;
/*		for (int f = 1; f < i; f++) {
			if (tmp == daichirumia[f]) {
				i--;
				cout << "...Retry...\n";
				break;
			}
		}*/
		daichirumia[i] = tmp;
		if (check[tmp] == 1) {
			i--;
			cout << " Retry";
		}
		check[tmp] = 1;
	}
	cout << "\n������������!\n" << "������𐶐������[!\n";
//	cout << sizeof(daichirumia[1]);
	for (int k = 1; k <= 8; k++) {
//		cout << daichirumia[i] << ':';
//		cout << daichirumia[k];
		switch ( daichirumia[k] ) {
		case 0: cout << "��"; break;
		case 1: cout << "��"; break;
		case 2: cout << "��"; break;
		case 3: cout << "��"; break;
		case 4: cout << "�["; break;
		case 5: cout << "��"; break;
		case 6: cout << "��"; break;
		default: cout << ""; break;
		}
	}
}