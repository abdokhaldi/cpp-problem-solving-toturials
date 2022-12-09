// circle_area_diameter_19.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
using namespace std;

float ReadD() {
    float D;
    cout << "enter D : \n";
    cin >> D;
    return D;
}

float CalcleArea(float D) {
    float Pai = 3.14;
    float Area = (pow(D,2) / 4) * Pai  ;
    return Area;
}

void PrintCircleArea(float Area ) {
    cout << "the result  is : " << Area << "\n";
}
int main()
{
    
    PrintCircleArea(CalcleArea(ReadD())); 
}

