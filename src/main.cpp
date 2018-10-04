#include <fstream>
#include <iostream>

int main(int argc, char *argv[]) {
  if (argc < 2) {
    std::cout << "usage: " << argv[0] << " path" << std::endl;
    return 1;
  }

  auto filename = std::string{argv[1]};

  std::cout << "Opening file: " << filename << std::endl;
  std::ifstream stream(filename);

  if (stream.is_open()) {
    std::cout << "File opened" << std::endl;
    for (std::string line; std::getline(stream, line);) {
      std::cout << filename << ": " << line << std::endl;
    }

  } else {
    std::cout << "Could not open file." << std::endl;
  }

  return 0;
}