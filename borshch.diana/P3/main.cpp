#include <iostream>
#include <fstream>
#include <cstdlib>
#include <climits>

int main(int argc, char* argv[]){
	
	if (argc != 4) {
           if (argc < 4) {
              std::cerr << "not enough arguments" << std::endl;
        } else {
           std::cerr << "too many arguments" << std::endl;
        }
        return 1;
	}

	char num = argv[1][0];
	if (num != '1' || num != '2') {
    	   std::cerr << "first parameter must be 1 or 2" << std::endl;
    	return 1;
	}
        std::ifstream inputFile(argv[2]);
        if (!inputFile.is_open()) {
	   std::cerr << "can't open file" << std::endl;
	   return 2;
	}
	
	int rows, cols;
	if (!(inputFile >> rows >> cols)) {
	   std::cerr << "NOT numbers" << std::endl;
	   inputFile.close();
	   return 2;
	}
	if (rows <= 0 || cols <= 0) {
	   std::cerr << "NOT real numbers" << std::endl;
           inputFile.close();
           return 2;
        }
return 0;
}
