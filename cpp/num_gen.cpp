//
// March 2022 - Gene Weber
//
//  Generates a sequence of integers. Counts up or down, and by different increments.
//
#include <iostream>
#include <limits>
#include <string>

int main() {

  int start = 0, increment = 1, total = 100;
  std::string buffer;

  std::cerr << "Starting integer [" << start << "]: ";
  std::getline(std::cin, buffer);
  if (buffer.size() != 0)
    start = std::stoi(buffer);

  std::cerr << "Increment value (can be negative) [" << increment << "]: ";
  std::getline(std::cin, buffer);
  if (buffer.size() != 0)
    increment = std::stoi(buffer);

  std::cerr << "How many numbers should I generate [" << total << "]? ";
  std::getline(std::cin, buffer);
  if (buffer.size() != 0)
    total = std::stoi(buffer);

  for (int i = 0; i < total; i++) {
    std::cout << start << std::endl;
    start +=  increment;
  }
}
