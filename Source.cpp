//Lizogub Matvey
#include <iostream>
using namespace std;
int main() {
	/*29. с помощью оператора while напишите программу вывода всех четных чисел в
	диапазоне от 2 до 100 включительно.
	int i = 2;
	while (i <= 100) {
		cout << i << ' ';
		i = i + 2;
	}
	*/
	/*Вводить целые числа пока не будет введино число <=0
	int a = 100;
	while (a < 0) {
		cin >> a;
	}
	*/
	/*int n, i;
	cin >> n;
	i = 1;
	while (i * i <= n) {
		cout << i * i << ' ';
		i++;
	}
	*/
	/*int i, n;
	cin >> n;
	i = 2;
	while (n % i != 0) {
		i++;
	}
	cout << i << endl;
	*/
	/*int i, n;
	cin >> n;
	i = 2;
	while (i >= n / 2) {
		if (n % i == 0) cout << i << endl;
		i++;
	}
	*/
	/*int i = 2, n;
	cin >> n
		while (i < n) {
			cout << i << endl;
			i *= 2;
		}
		*/
	/*double x, y;
	int k = 0;
	cin >> x >> y;
	while (x < y) {
		x * 1.1;
		k++;
	}
	cout << k << endl;
	*/
	int a;
	cout >> a;
	while (a != 0) {
		cout << a % 10 << ' ';
		a = a / 10;
	}
	return 0;
}