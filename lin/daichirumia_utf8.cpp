#include <iostream>
#include <random>

using namespace std;

int main() {
	random_device rng;
	cout << "だいちるーみあ生成機";
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
		daichirumia[i] = tmp;
		if (check[tmp] == 1) {
			i--;
			cout << " Retry";
		}
		check[tmp] = 1;
	}
	cout << "\n乱数生成完了!\n" << "文字列を生成するよー!\n";
	for (int k = 1; k <= 8; k++) {
		switch ( daichirumia[k] ) {
		case 0: cout << "だ"; break;
		case 1: cout << "い"; break;
		case 2: cout << "ち"; break;
		case 3: cout << "る"; break;
		case 4: cout << "ー"; break;
		case 5: cout << "み"; break;
		case 6: cout << "あ"; break;
		default: cout << ""; break;
		}
	}
	cout << '\n';
}