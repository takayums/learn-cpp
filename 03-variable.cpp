#include <iostream>
#include <string>

int main() {
  /*
   * Tipe Data C++
   * - Int
   * - Double
   * - Char
   * - String
   * - Bool
   */

  // Declaration Variable
  int myNumbA = 15;
  std::cout << "Number: " << myNumbA << "\n";

  // Declartion First Type and Assing Value in Variable
  int myNumbB;
  myNumbB = 10;
  std::cout << "Number: " << myNumbB << "\n";
  std::cout << "Changing Variable Values \n";

  // Overwrite Variable myNumbB
  myNumbB = 5;
  std::cout << "Number: " << myNumbB << "\n";

  // Other Type Data
  char myChar = 'D'; // Char
  std::cout << "My Char: " << myChar << "\n";

  double myDouble = 5.99; // Double
  std::cout << "My Double: " << myDouble << "\n";

  std::string myString = "Hello World"; // String
  std::cout << "My String: " << myString << "\n";

  bool myBool = true; // Boolean
  std::cout << "My Bool: " << myBool << "\n";

  // Declare Multiple Variable
  int x, y, z;
  x = 2;
  y = 4;
  z = 6;
  std::cout << "My Multiple Variabel: " << x << " " << y << " " << z << "\n";

  // One Value to All Variable
  int n, m;
  m = n = 50;
  std::cout << "One Value to All Variable m & n: " << m << " " << n << "\n";

  // Constant
  const int myConts = 100;
  // myConst = 101; -> Error
  std::cout << "My Constant Variable: " << myConts << "\n";
  return 0;
}
