#include <iostream>
#include <string>

int main() {
  // Flush after every std::cout / std:cerr
  std::cout << std::unitbuf;
  std::cerr << std::unitbuf;

  // Start REPL
  std::string command;
  while (command != "exit"){
	  std::cout << "$ ";
	  std::string command;
	  std::cin >> command;
	  if (command != "exit") {
		  std::cout << command << ": command not found" << std::endl;
	  }
	  else {
		  return 0;
	  }
  }
  /*else {
	  exit(-1);
  }*/
} 
