#include <iostream>
#include <string>

int main() {
  // Flush after every std::cout / std:cerr
  std::cout << std::unitbuf;
  std::cerr << std::unitbuf;

  // Start REPL
  int start = 1;
  while (start < 2){
	  std::cout << "$ ";
	  std::string command;
	  std::cin >> command;
	  std::cout << command << ": command not found" << std::endl;
  }
} 
