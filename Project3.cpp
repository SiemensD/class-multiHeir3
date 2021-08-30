#include <iostream>
using namespace std;

class Square
{
protected:
    float side;
public:
    Square(float side) 
    {
        this->side = side;
    }
    float& GetSide() { return side; }
};

class Circle
{
protected:
    float radius;
public:
    Circle(float radius)
    {
        this->radius = radius;
    }
    float &GetRadius() { return radius; }

};

class CircleInSquare : public Circle, public Square
{
public:
    CircleInSquare(float radius) : Square(radius * 2), Circle(radius) { }
    
    void Print()
    {
        cout << "\tПараметры фигуры «Окружность, вписанная в квадрат»" << endl<<endl;
        cout << "Длинна стороны квадрата: " <<side<< endl;
        cout << "Радиус окружности: "<<radius << endl;
    }
};

int main(void)
{
    setlocale(LC_ALL, "ru");
        
    float r = 2;
    CircleInSquare myCircle = CircleInSquare(r);
    myCircle.Print();

    return 0;
}



/*3.Используя понятие множественного наследования,
разработайте класс «Окружность, вписанная в ква -
драт».*/