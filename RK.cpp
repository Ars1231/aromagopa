#include <iostream>
#include <cmath>
using namespace std;

double series(int n) {
	double f = 1 / (log(n) / log(4));
	return f;
}


int main() {
	int n;
	double summ = 0;
	cin >> n;
	for (int i = 2; i < n + 2; i++) cout << i - 1 << " ��������� " << series(i) << "\n";
	for (int i = 2; i < n + 2; i++) summ += series(i);
	cout << "����� ���� " << summ << endl;
	return 0;
}