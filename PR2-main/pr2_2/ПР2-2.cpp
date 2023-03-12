#include "circle.h";
#include <iostream>

using namespace std;

int main() {

	setlocale(LC_ALL, "Russian");

	Circle A(0, 0, 0);
	Circle B(0, 0, 0);
	Circle C(0, 0, 0);

	float radius, x_center, y_center;
	float R, X, Y; float a, b, c;

	cout << "Укажите радиус, х и у для окружности №1 через пробел: ";
	cin >> radius >> x_center >> y_center;
	A.set_circle(radius, x_center, y_center);

	cout << "Укажите радиус, х и у для окружности №2 через пробел: ";
	cin >> radius >> x_center >> y_center;
	B.set_circle(radius, x_center, y_center);

	cout << "Укажите радиус, х и у для окружности №3 через пробел: ";
	cin >> radius >> x_center >> y_center;
	C.set_circle(radius, x_center, y_center);

	cout << "Введите длины сторон треугольника через пробел: ";
	cin >> a >> b >> c; cout << endl;

	cout << "Площадь окружности №1 - " << A.square() << endl;
	cout << "Площадь окружности №2 - " << B.square() << endl;
	cout << "Площадь окружности №3 - " << C.square() << endl;
	cout << endl;

	A.get_circle(R, X, Y);
	if (B.check_circle(R, X, Y)) cout << "Окружность №1 и №2 пересекаются" << endl;
	else cout << "Окружность №1 и №2 не пересекаются" << endl;
	B.get_circle(R, X, Y);
	if (C.check_circle(R, X, Y)) cout << "Окружность №2 и №3 пересекаются" << endl;
	else cout << "Окружность №2 и №3 не пересекаются" << endl;
	C.get_circle(R, X, Y);
	if (A.check_circle(R, X, Y)) cout << "Окружность №1 и №3 пересекаются" << endl;
	else cout << "Окружность №1 и №3 не пересекаются" << endl;
	cout << endl;

	if (A.triangle_around(a, b, c)) cout << "Окружность №1 можно вписать в заданный треугольник" << endl;
	else cout << "Окружность №1 нельзя вписать в заданный треугольник" << endl;
	if (B.triangle_around(a, b, c)) cout << "Окружность №2 можно вписать в заданный треугольник" << endl;
	else cout << "Окружность №2 нельзя вписать в заданный треугольник" << endl;
	if (C.triangle_around(a, b, c)) cout << "Окружность №3 можно вписать в заданный треугольник" << endl;
	else cout << "Окружность №3 нельзя вписать в заданный треугольник" << endl;
	cout << endl;

	if (A.triangle_in(a, b, c)) cout << "В окружность №1 можно вписать заданный треугольник" << endl;
	else cout << "В окружность №1 нельзя вписать заданный треугольник" << endl;
	if (B.triangle_in(a, b, c)) cout << "В окружность №2 можно вписать заданный треугольник" << endl;
	else cout << "В окружность №2 нельзя вписать заданный треугольник" << endl;
	if (C.triangle_in(a, b, c)) cout << "В окружность №3 можно вписать заданный треугольник" << endl;
	else cout << "В окружность №3 нельзя вписать заданный треугольник" << endl;

	return 0;

}