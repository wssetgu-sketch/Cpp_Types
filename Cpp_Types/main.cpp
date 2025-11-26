#include <iostream>
using namespace std;

int main() {
    // int
    int a_1 = 10, a_2 = -3, a_3 = 0, a_4 = 25, a_5 = 100;
    cout << "a_1 = " << a_1 << " | тип: int, размер: " << sizeof(int) << " б." << endl;
    cout << "a_2 = " << a_2 << " | тип: int, размер: " << sizeof(int) << " б." << endl;
    cout << "a_3 = " << a_3 << " | тип: int, размер: " << sizeof(int) << " б." << endl;
    cout << "a_4 = " << a_4 << " | тип: int, размер: " << sizeof(int) << " б." << endl;
    cout << "a_5 = " << a_5 << " | тип: int, размер: " << sizeof(int) << " б." << endl;

    cout << endl;

    // short
    short s_1 = 1, s_2 = 2, s_3 = 3, s_4 = 4, s_5 = 5;
    cout << "s_1 = " << s_1 << " | тип: short, размер: " << sizeof(short) << " б." << endl;
    cout << "s_2 = " << s_2 << " | тип: short, размер: " << sizeof(short) << " б." << endl;
    cout << "s_3 = " << s_3 << " | тип: short, размер: " << sizeof(short) << " б." << endl;
    cout << "s_4 = " << s_4 << " | тип: short, размер: " << sizeof(short) << " б." << endl;
    cout << "s_5 = " << s_5 << " | тип: short, размер: " << sizeof(short) << " б." << endl;

    cout << endl;

    // long
    long l_1 = 1000, l_2 = 2000, l_3 = 3000, l_4 = 4000, l_5 = 5000;
    cout << "l_1 = " << l_1 << " | тип: long, размер: " << sizeof(long) << " б." << endl;
    cout << "l_2 = " << l_2 << " | тип: long, размер: " << sizeof(long) << " б." << endl;
    cout << "l_3 = " << l_3 << " | тип: long, размер: " << sizeof(long) << " б." << endl;
    cout << "l_4 = " << l_4 << " | тип: long, размер: " << sizeof(long) << " б." << endl;
    cout << "l_5 = " << l_5 << " | тип: long, размер: " << sizeof(long) << " б." << endl;

    cout << endl;

    // float
    float f_1 = 1.1f, f_2 = 2.2f, f_3 = 3.3f, f_4 = 4.4f, f_5 = 5.5f;
    cout << "f_1 = " << f_1 << " | тип: float, размер: " << sizeof(float) << " б." << endl;
    cout << "f_2 = " << f_2 << " | тип: float, размер: " << sizeof(float) << " б." << endl;
    cout << "f_3 = " << f_3 << " | тип: float, размер: " << sizeof(float) << " б." << endl;
    cout << "f_4 = " << f_4 << " | тип: float, размер: " << sizeof(float) << " б." << endl;
    cout << "f_5 = " << f_5 << " | тип: float, размер: " << sizeof(float) << " б." << endl;

    cout << endl;

    // double
    double d_1 = 1.11, d_2 = 2.22, d_3 = 3.33, d_4 = 4.44, d_5 = 5.55;
    cout << "d_1 = " << d_1 << " | тип: double, размер: " << sizeof(double) << " б." << endl;
    cout << "d_2 = " << d_2 << " | тип: double, размер: " << sizeof(double) << " б." << endl;
    cout << "d_3 = " << d_3 << " | тип: double, размер: " << sizeof(double) << " б." << endl;
    cout << "d_4 = " << d_4 << " | тип: double, размер: " << sizeof(double) << " б." << endl;
    cout << "d_5 = " << d_5 << " | тип: double, размер: " << sizeof(double) << " б." << endl;

    cout << endl;

    // char
    char c_1 = 'A', c_2 = 'B', c_3 = 'C', c_4 = 'D', c_5 = 'E';
    cout << "c_1 = " << c_1 << " | тип: char, размер: " << sizeof(char) << " б." << endl;
    cout << "c_2 = " << c_2 << " | тип: char, размер: " << sizeof(char) << " б." << endl;
    cout << "c_3 = " << c_3 << " | тип: char, размер: " << sizeof(char) << " б." << endl;
    cout << "c_4 = " << c_4 << " | тип: char, размер: " << sizeof(char) << " б." << endl;
    cout << "c_5 = " << c_5 << " | тип: char, размер: " << sizeof(char) << " б." << endl;

    cout << endl;

    // bool
    bool b_1 = true, b_2 = false, b_3 = true, b_4 = false, b_5 = true;
    cout << boolalpha; // выводить true/false словами
    cout << "b_1 = " << b_1 << " | тип: bool, размер: " << sizeof(bool) << " б." << endl;
    cout << "b_2 = " << b_2 << " | тип: bool, размер: " << sizeof(bool) << " б." << endl;
    cout << "b_3 = " << b_3 << " | тип: bool, размер: " << sizeof(bool) << " б." << endl;
    cout << "b_4 = " << b_4 << " | тип: bool, размер: " << sizeof(bool) << " б." << endl;
    cout << "b_5 = " << b_5 << " | тип: bool, размер: " << sizeof(bool) << " б." << endl;

    return 0;
}