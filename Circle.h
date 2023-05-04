// Circle.h
#pragma once
#include <iostream>


// Структура "Координатная точка"
struct Point {
	float x;
	float y;
};

// Класс "Окружность"
class Circle
{
private:
	Point center;
	float radius;
	static unsigned int counter;
public:
	static const float PI;
	// Constructors
	Circle() : radius{ 0 }, center{ 0,0 } { counter++; }
	Circle(float r, Point c) : radius{ r }, center{ c } { counter++; }
	// Methods
	void print_info();
	float get_len();
	static float get_pi();
	static int get_counter();
};

const float Circle::PI{ 3.14 };
unsigned int Circle::counter = 0;

// Returns PI value
float Circle::get_pi()
{

	return PI;
}

//Returns count of objects
int Circle::get_counter() {
	return counter;
}


// Show info about the circle
void Circle::print_info()
{
	std::cout << "Center: ("
		<< center.x << "," << center.y
		<< "); Radius: " << radius << std::endl;
}

// Метод возвращает длину окружности
float Circle::get_len()
{
	float len;
	len = 2 * PI * radius;
	return len;
}
