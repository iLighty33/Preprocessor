// ������������ ������ ������� C++
#include <iostream>
using namespace std;

#define PI 3.14
#define forever for (int i = 0;  ;i++)
#define begin {
#define end }
// ������� �� ����� ������� � define
#define repeat5 for (int i = 0; i < 5; i++)\
				{
// �������� ��������
#define mult(a, b) (a * b)
#define compare(a, b) (a > b ? a : b)
#define loop(n, m) for (int i = n; i < m; i++)

#define crtArr(t, s) t s[5]

	int main() {
		setlocale(LC_ALL, "Russian");

		crtArr(float, myArr); // ����� �������
		float myArr[5];	      // ������������ ���

		myArr[1] = 0;

		/*int A, B;
		cout << "������� ��� �����: ";
		cin >> A >> B;
		loop(A, B)
			cout << i << endl;
			*/
	/*	int x, y;
		cout << "������� ��� �����: ";
		cin >> x >> y;
		cout << x << " * " << y << " = " << mult(x, y) << endl;
		cout << x << " * " << y << " = " << (x * y) << endl; // ������ �������
		cout << "������� �� ����� = " << compare(x, y) << endl;
		cout << "������� �� ����� = " << (x > y ? x : y) << endl; // ������ ������������� (������ ��� ������)
		*/

	//	repeat5 cout << "Hi\n";}

	/*
	cout << "PI = " << PI << endl;
	#undef PI
	#define PI 3
	cout << "PI = " << PI << endl;
	#undef forever
	#define while (true) */

	/*forever begin
		cout << i << " ";
		if (i >= 100)
			break;
	end*/

	/*int n = 10;

	cout << "PI = " << PI << endl;
	if (n > PI)
		cout << "N more then Pi\n";*/

	return 0;
}