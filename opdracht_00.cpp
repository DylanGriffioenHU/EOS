#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main(int argc, char * argv[]){
    string input = argv[1];
    int argument = int(*argv[2] - '0');

    for (size_t i = 0; i <= input.size(); i++){
         input[i] += argument;
    }

     cout << "De encrypte zin is: " << input << endl;
}