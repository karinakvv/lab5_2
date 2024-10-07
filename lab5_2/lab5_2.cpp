// lab5_2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Замінити всі елементи квадратної матриці, які знаходяться нижче головної діагоналі, нулями.

#include <iostream>
#include <iomanip>
#include <windows.h>
using namespace std;


void replace(int** matrix, int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < i; j++) { 
            matrix[i][j] = 0;
        }
    }
}

int main() {

    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    srand(time(0));

    int size;
    cout << "Введіть розмір квадратної матриці: ";
    cin >> size;

    
    int** matrix = new int* [size];
    for (int i = 0; i < size; i++) {
        matrix[i] = new int[size];
    }
    return matrix;

    
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            matrix[i][j] = rand() % 90 + 10;
        }

    // Виведення початкової матриці
    cout << "\nПочаткова матриця:\n";
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cout << setw(4) << matrix[i][j];
        }
        cout << endl;
    }

    // Заміна елементів нижче головної діагоналі
    replace(matrix, size);

    // Виведення зміненої матриці
    cout << "\nМатриця після заміни елементів нижче головної діагоналі:\n";
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cout << setw(4) << matrix[i][j];
        }
        cout << endl;
    }


    return 0;
}
