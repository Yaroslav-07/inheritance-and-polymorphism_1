#include <iostream>

class Figure {

private:
    int sides_count;
    std::string name;
public:
    Figure (int sides = 0, std::string name = "No name") : sides_count(sides), name(name) {}
    int get_sides_count() const {
        return sides_count;
   }
    std::string get_name () const {
        return name;
    
    }
};

class Triangle : public Figure {
public:
    Triangle() : Figure (3, "Triangle") {};

};

class Quadrangle : public Figure {
public:
    Quadrangle() : Figure (4, "Quadrangle") {};

};



int main()
{
    Figure figure;
    Triangle triangle;
    Quadrangle quadrangle;
    std::cout << "Number of sides" << std::endl;

    std::cout << "Figure name: " << figure.get_name() << std::endl;
    std::cout << "Figure sides count: " << figure.get_sides_count() << std::endl;

    std::cout << "Figure name: " << triangle.get_name() << std::endl;
    std::cout << "Figure sides count: " << triangle.get_sides_count() << std::endl;

    std::cout << "Figure name: " << quadrangle.get_name() << std::endl;
    std::cout << "Figure sides count: " << quadrangle.get_sides_count() << std::endl;
    
}
