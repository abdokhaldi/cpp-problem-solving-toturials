// validate_number_in_range_24.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int ReadNumber() {
    int Number;
    cout << "Enter your Age : ";
    cin >> Number;
    return Number;
}
bool ValidateNumberInRange(int Number,int From,int To) {
    return (Number >= From && Number <= To );
}



void PrintAge(int Age) {
    if (ValidateNumberInRange(Age, 18, 45)) {
        cout <<   Age << " is valide age .";
    }
    else {
        cout << Age << " is invalide age .";
    }
}

int main()
{
    
    PrintAge(ReadNumber());
}

