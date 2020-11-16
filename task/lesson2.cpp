/* Ќаписать программу, определ€ющую, площадь какой фигуры больше: круга радиуса R, 
равностороннего треугольника с длиной стороны а или квадрата со стороной d. (использу€ ?:)*/


#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
	double circle, triangle, square, result;
	const double pi = 3.14;

	cout << "¬ведите радиус круга: ";
	cin >> circle;
	cout << "ѕлощадь круга равна: " << pi * circle * circle << endl;
	cout << "¬ведите длину стороны равностороннего треугольника: ";
	cin >> triangle;
	result = pow(3, 1 / 2) *  triangle * triangle / 4;
	cout << "ѕлощадь треугольника равна: " << result << endl;
	cout << "¬ведите длину стороны квадрата: ";
	cin >> square;
	cout << "ѕлощадь квадрата равна: " << square * square << endl;

	if (circle > triangle) {
		if (circle > square) {
			cout << "ѕлощадь круга больше, чем площадь остальных фигур!" << endl;
		}
		else  if (triangle > square) {
			cout << "ѕлощадь треугольника больше, чем площадь остальных фигур!" << endl;
		} else cout << "ѕлощадь квадрата больше, чем площадь остальных фигур!" << endl;
	} else if (triangle > square) {
		cout << "ѕлощадь треугольника больше, чем площадь остальных фигур!" << endl;
	}
	else cout << "ѕлощадь квадрата больше, чем площадь остальных фигур!" << endl;

	

	system("PAUSE");
}