// Lab_02.cpp
// ��� �����
// ����������� ������ � 2.1
// ˳��� ��������.
// ������ 13
#include <iostream>

using namespace std;
int main()
{
	double a; // ������� ��������
	double B; // ������� ��������
	double z1; // ��������� ���������� 1-�� ������
	// double z2; // ��������� ���������� 2-�� ������

	cout << "a = "; cin >> a;
	cout << "B = "; cin >> B;
	z1 = (sin(a) + cos(2 * B - a)) / (cos(a) - sin(2 * B - a));
	// z2 = (1 + sin(2 * B)) / (cos(2 * B));
	cout << endl;
	cout << "z1 = " << z1 << endl;
	// cout << "z2 = " << z2 << endl;
	cin.get();
	return 0;
}