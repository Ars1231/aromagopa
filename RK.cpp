#include <iostream>
#include <cmath>
using namespace std;

double series(int n) {
	double f = 1 / ( log(n) / log(4) );
	return f;
}


int main() {
	int n;
	double summ = 0;
	cin >> n;     //сделал для произвольно введенного кол-ва слагаемых.
	for (int i = 2; i < n + 2; i++) cout << i - 1 << " слагаемое ряда " << series(i) << "\n";
	for (int i = 2; i < n + 2; i++) summ += series(i);
	cout << "Сумма ряда = " << summ << endl;
	return 0;
}

//это код для 6 слагаемых, как и было изначально в задаче
/*#include <iostream>
#include <cmath>
using namespace std;

double series(int n) {
	double f = 1 / ( log(n) / log(4) );
	return f;
}


int main() {
	double summ = 0;
	for (int i = 2; i < 8; i++) cout << i - 1 << " слагаемое ряда " << series(i) << "\n";
	for (int i = 2; i < 8; i++) summ += series(i);
	cout << "Сумма ряда = " << summ << endl;
	return 0;
}
*/
