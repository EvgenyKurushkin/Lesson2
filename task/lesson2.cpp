/* �������� ���������, ������������, ������� ����� ������ ������: ����� ������� R, 
��������������� ������������ � ������ ������� � ��� �������� �� �������� d. (��������� ?:)*/


#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
	double circle, triangle, square, result;
	const double pi = 3.14;

	cout << "������� ������ �����: ";
	cin >> circle;
	cout << "������� ����� �����: " << pi * circle * circle << endl;
	cout << "������� ����� ������� ��������������� ������������: ";
	cin >> triangle;
	result = pow(3, 1 / 2) *  triangle * triangle / 4;
	cout << "������� ������������ �����: " << result << endl;
	cout << "������� ����� ������� ��������: ";
	cin >> square;
	cout << "������� �������� �����: " << square * square << endl;

	if (circle > triangle) {
		if (circle > square) {
			cout << "������� ����� ������, ��� ������� ��������� �����!" << endl;
		}
		else  if (triangle > square) {
			cout << "������� ������������ ������, ��� ������� ��������� �����!" << endl;
		} else cout << "������� �������� ������, ��� ������� ��������� �����!" << endl;
	} else if (triangle > square) {
		cout << "������� ������������ ������, ��� ������� ��������� �����!" << endl;
	}
	else cout << "������� �������� ������, ��� ������� ��������� �����!" << endl;

	

	system("PAUSE");
}