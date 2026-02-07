#include <iostream>

int main() {
  /*
   * Oprator
   * # Artimatika
   * # Penugasan
   * # Perbandingan
   * # Logical
   * # Precedence
   */

  // Artimatika
  int x, y, z;
  x = 10;
  y = 5;
  z = x + y;
  std::cout << "Hasil x + y " << z << "\n";

  // Penugasan
  x += 10;
  std::cout << "Hasil x += 5 " << x << "\n";

  // Perbandingan
  bool j = x > y;
  std::cout << "x > y = " << std::boolalpha << j << "\n";

  // Logical
  std::cout << "x > y && x > z  = " << std::boolalpha << (x > y && x > z)
            << "\n";

  // Precedence
  int resultA, resultB;
  resultA = 2 + 3 * 4;
  resultB = (2 + 3) * 4;
  std::cout << "2 + 3 * 4 = " << resultA << "\n";
  std::cout << "(2 + 3) * 4 = " << resultB << "\n";
  return 0;
}
