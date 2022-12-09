// read_until_18_45__25.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int ReadAge() {
    int Age;
    cout << "please enter your age : \n";
    cin >> Age;
    return Age;
}

bool ValidateAge(int Age , int From, int To) {
    bool check = (Age >= From && Age <= To);
    return check;
}

int ReadUntilAge(int From, int To) {
    int Age = 0;

    do {
        Age = ReadAge();
    } while (!ValidateAge(Age,From,To));
    return Age;
}




int main()
{
    cout << ReadUntilAge(18,45);
}

