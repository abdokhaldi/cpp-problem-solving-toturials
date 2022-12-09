// circle_area_isosceles_triangle_22.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>

using namespace std;

void  ReadNumberOfIsoscelesTriangle(float& A, float& B) {
    cout << "Enter Triangle Side : ";
	cin >> A;
    cout << "Enter Triangle Base : ";
	cin >> B;
}

float CalculateArea(float A, float B) {
	const float Pai = 3.14;
	float Result;
	Result = (Pai * pow(B, 2) / 4) * ((2 * A - B) / (2 * A + B));
	return Result;
}

void PrintArea(float Result) {
	cout << "the result is " <<  Result ;
}



int main()
{
	float A, B;
	ReadNumberOfIsoscelesTriangle(A, B);
	PrintArea(CalculateArea(A,B));
}

