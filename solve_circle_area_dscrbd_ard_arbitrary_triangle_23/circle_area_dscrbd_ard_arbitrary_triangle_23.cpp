// circle_area_dscrbd_ard_arbitrary_triangle_23.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>

using namespace std;

void ReadArea(float& A,float& B,float& C) {
    cout << "enter A : \n";
    cin >> A;
    cout << "enter B : \n";
    cin >> B;
    cout << "enter C : \n";
    cin >> C;

   }



float CalculateArea(float A, float B, float C) {
    float P, Square, Area;
     P = (A + B + C) / 2;
     Square = (A * B * C) / (4 * sqrt(P * (P - A) * (P - B) * (P - C)));
     Area = pow(Square, 2);
    return Area;
}

void PrintResult(float Area) {
    cout << "the result is " << Area << endl;
}
int main()
{
    float A, B, C;
    ReadArea(A,B,C);
    PrintResult(CalculateArea(A,B,C));
    

}

