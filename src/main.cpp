#include <iostream>
#include <string>

int main() {
  // Start REPL
  while (true){
	  // Flush after every std::cout / std::cerr
	  std::cout << std::unitbuf;
	  std::cerr << std::unitbuf;


	  std::cout << "$ ";
	  std::string command;
	  std::getline (std::cin, command);
	  if (command == "exit") {
		  break;
	  }
	  else if (command.substr(0,4) == "echo") {
		  std::cout << command.substr(5) << "\n";
	  }
	  else if (command.substr(0,4) == "type") {
		  if (command.substr(5) == "echo" || "exit" || "type") {
			  std::cout << command.substr(5) << " is a shell builtin \n";
		  }
		  else {
			  std::cout << command.substr(5) << ": not found";
		  }
	  }
	  else {
		  std::cout << command << ": command not found" << std::endl;
	  }
  }
} 
