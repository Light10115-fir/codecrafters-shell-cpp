#include <iostream>
#include <string>

int main() {
  // Flush after every std::cout / std:cerr
  std::cout << std::unitbuf;
  std::cerr << std::unitbuf;

  // Start REPL
  std::string command;
  std::string echo_arguments;
  while (command != "exit"){
	  std::cout << "$ ";
	  std::string command;
	  std::cin >> command;
	  if (command != "exit" && command != "echo") {
		  std::cout << command << ": command not found" << std::endl;
	  }
	  else if (command == "echo") {
		  std::getline(std::cin, echo_arguments);
		  std::cout << echo_arguments << "\n";
	  }
	  else {
		  return 0;
	  }
  }
} 
