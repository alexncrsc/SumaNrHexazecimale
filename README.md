Hexadecimal class
This is a C++ class that represents hexadecimal numbers, with the ability to convert them to decimal and perform arithmetic operations. The implementation uses a dynamic char array to store the hexadecimal digits as characters, and a long long integer to store the decimal equivalent.

Usage
To use the Hexadecimal class, simply include the Hexadecimal.h header file in your C++ code, and create instances of the class:

#include <iostream>
#include "Hexadecimal.h"

int main() {
  // create a hexadecimal instance from a string
  Hexadecimal hex("1A");
  // create a hexadecimal instance from a long long integer
  Hexadecimal hex2(12345678);

  // convert a hexadecimal to decimal
  std::cout << hex.decimal() << std::endl; // 26
  std::cout << hex2.decimal() << std::endl; // 1193046

  // perform arithmetic operations
  hex += "F"; // equivalent to hex.setNumar(hex.getNumar() + 15);
  std::cout << hex.getSir() << std::endl; // "1AF"

  hex -= "5"; // equivalent to hex.setNumar(hex.getNumar() - 5);
  std::cout << hex.getSir() << std::endl; // "1AA"
}

Implementation details
The Hexadecimal class uses a char pointer to store the hexadecimal digits as characters, and a long long integer to store the decimal equivalent. The class has three constructors:

Hexadecimal(): creates an empty instance of the class.
Hexadecimal(const long long numar_): creates an instance of the class from a decimal number.
Hexadecimal(const char* sir_): creates an instance of the class from a null-terminated string that contains the hexadecimal digits.
The class has several methods to manipulate and access the hexadecimal and decimal representations:

void setName(const char* sir_): sets the hexadecimal representation of the instance from a null-terminated string that contains the hexadecimal digits.
void setNumar(const long long numar_): sets the decimal representation of the instance from a long long integer.
long long getNumar(): returns the decimal representation of the instance.
char* getSir(): returns a pointer to the null-terminated string that contains the hexadecimal digits.
long long decimal(): returns the decimal representation of the instance, calculated from the hexadecimal representation.
The class also overloads several arithmetic operators:

int operator+=(const int numar_) const: adds an integer to the decimal representation of the instance, and returns the result.
int operator-=(const int numar_) const: subtracts an integer from the decimal representation of the instance, and returns the result.
long long operator+=(const char sir[])const: adds a null-terminated string that contains hexadecimal digits to the instance, and returns the result as a decimal number.
long long operator-=(const char sir[])const: subtracts a null-terminated string that contains hexadecimal digits from the instance, and returns the result as a decimal number.
Note that the arithmetic operators return a value instead of modifying the instance in place.

License
This code is licensed under the MIT License. See the LICENSE file for details.
