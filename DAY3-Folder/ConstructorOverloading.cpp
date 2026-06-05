#include <iostream>
#include <string>
using namespace std;


class Area
{
private:
    int sideA;
    int sideB;
    int sideC;
    float radius;
    float result;
public:
    // Default Constructor
    Area(){
        sideA = 0;
        sideB = 0;
        sideC = 0;
        radius = 0;
        cout << "No shape found!" << endl;
    }


    // Parameterized Constructor for Square
    Area(int side1){
        sideA = side1;


        cout << "The shape of the Object is Square" << endl;


        result = sideA * sideA;        //Explicit type casting by (int)
        cout << "Area of Square: " << (int)result << endl;
    }
   
    // Parameterized Constructor for Rectangle/Triangle
    Area(int side1, int side2){
        char shape;
        sideA = side1;
        sideB = side2;
       
        cout << "Do you need to find the Area for Rectangle(R) or Traingle(T)?";
        cin >> shape;
       
        if(shape == 'R') {
            result = sideA * sideB;
            cout << "Area of Rectangle: " << (int)result << endl;
        } else if (shape == 'T') {
            result = 0.5 * sideA * sideB;
            cout << "Area of Triangle: " << result << endl;
        }
    }
   
    // Parameterized Constructor for Cube/Cubiod
    Area(int side1, int side2, int side3){
        sideA = side1;
        sideB = side2;
        sideC = side3;
       
        if(sideA == sideB && sideB== sideC) {
            result = sideA * sideA * sideA;
            cout << "Area of Cube: " << (int)result << endl;
        } else {
            result = sideA * sideB * sideC;
            cout << "Area of Cuboid: " << (int)result << endl;
        }      
    }
   
    // Parameterized Constructor for Circle/Sphere
    Area(float Radius){
        char shape;
        radius = Radius;
       
        cout << "Do you need to find the Area for Circle(C) or Sphere(S)?";
        cin >> shape;
       
        if(shape == 'C') {
            result = 3.142 * radius * radius;
            cout << "Area of Circle: " << result << endl;
        } else if (shape == 'S') {
            result = (4/3) * 3.142 * radius * radius * radius;
            cout << "Area of Sphere: " << result << endl;
        }
    }
};


int main() {
    Area line;


    Area square(25);


    Area rectangle(35,25);
   
    Area triangle(42,24);


    Area cube(25, 25, 25);


    Area cuboid(35, 45, 55);


    Area circle(5.83f);


    Area sphere(5.83f);
}

