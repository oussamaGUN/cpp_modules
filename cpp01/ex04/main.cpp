#include "main.hpp"


int main(int argc, char *argv[]) {
    std::string s1 = argv[2];
    std::string s2 = argv[3];
    ThisIsClass file;
    std::ifstream inputFile(argv[1]); // Open the file for reading
    if (!inputFile) {
        std::cerr << "Unable to open file example.txt";
        return 1; // Exit with error code
    }

    char line[255];
    std::string res;
    while (inputFile) {
        inputFile.getline(line, 255); // Read the entire file into a string
        res.append(file._replace(line, s1, s2));
        res.append("\n");
    }
    std::cout << res << std::endl; // Print each line from the file
    
    
    std::string output = argv[1];
    std::ofstream outputFile(output.append(".replace")); // Open the file for writing
    outputFile << res;

    inputFile.close(); // Close the file
    return 0;
}
