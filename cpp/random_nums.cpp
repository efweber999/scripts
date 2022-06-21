//
// March 2022 - Gene Weber
//
// Generates a series of psuedo random numbers.
//
#include <random>
#include <iostream>
#include <limits>
#include <string>

int main() {

  int low = 0, high = std::numeric_limits<int>::max(), total = 100;
  std::string buffer;

  std::cerr << "Minimum number [" << low << "]: ";
  std::getline(std::cin, buffer);
  if (buffer.size() != 0)
    low = std::stoi(buffer);

  std::cerr << "Maximum number [" << high << "]: ";
  std::getline(std::cin, buffer);
  if (buffer.size() != 0)
    high = std::stoi(buffer);

  std::cerr << "How many numbers should I generate [" << total << "]? ";
  std::getline(std::cin, buffer);
  if (buffer.size() != 0)
    total = std::stoi(buffer);

  std::random_device dev;
  std::mt19937 rng(dev());
  std::uniform_int_distribution<std::mt19937::result_type> dist(low,high);

  for (int i = 0; i < total; i++) {
    std::cout << dist(rng) << std::endl;
  }
}
