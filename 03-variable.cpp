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
  return 0;
}
