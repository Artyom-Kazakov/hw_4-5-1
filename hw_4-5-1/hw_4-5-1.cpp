#include <iostream>
#include <string>

class Figure {
protected:
	int sides_count;
	std::string name;
public:
	int get_sides_count() {
		return sides_count;
	}
	std::string get_name() {
		return name;
	}
	Figure() {
		sides_count = 0;
		name = "Figure";
	}
};

class Triangle : public Figure {
public:
	Triangle() {
		sides_count = 3;
		name = "Triangle";
	}
};

class Quadrangle : public Figure {
public:
	Quadrangle() {
		sides_count = 4;
		name = "Quadrangle";
	}
};


int main(int argc, char** argv)
{
	std::cout << "Sides count:\n";
	Figure figure;
	std::cout << figure.get_name() << ": " << figure.get_sides_count() << std::endl;
	Triangle triangle;
	std::cout << triangle.get_name() << ": " << triangle.get_sides_count() << std::endl;
	Quadrangle quadrangle;
	std::cout << quadrangle.get_name() << ": " << quadrangle.get_sides_count() << std::endl;

	return 0;
}
