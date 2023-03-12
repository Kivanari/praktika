#include <iostream>

using namespace std;

class Circle {
private:

	float radius;   // Радиус окружности
	float x_center; // Координата х центра окружности
	float y_center; // Координата у центра окружности

public:

	Circle(float r, float x, float y)
	{
		radius = r;
		x_center = x;
		y_center = y;
	};

	void set_circle(float r, float x, float y) {	// позволяет задать значения radius, x_center, y_center для объектов
		radius = r;
		x_center = x;
		y_center = y;
	}

	void get_circle(float &R, float &X, float &Y) {
		R = radius;
		X = x_center;
		Y = y_center;
	}

	float square() { // Bозвращает площадь окружности
		return 3.14 * radius * radius;
	}

	bool triangle_around(float a, float b, float c) { // Описание  окружности вокруг треугольника а,b,c
		double p = (a + b + c) / 2;
		double S = sqrt(p * (p - a) * (p - b) * (p - c));
		return (radius >= ((a + b + c) / (4 * S)));
	}

	bool triangle_in(float a, float b, float c) { // Вписание окружности в треугольник a,b,c
		double p = (a + b + c) / 2;
		double S = sqrt(p * (p - a) * (p - b) * (p - c));
		return (radius <= S / p);
	}

	bool check_circle(float r, float x_cntr, float y_cntr) { // Пересечение с данной окружностью
		float z = sqrt(pow((x_cntr - x_center), 2) + pow((y_cntr - y_center), 2));
		return (radius + r <= z);
	}

};