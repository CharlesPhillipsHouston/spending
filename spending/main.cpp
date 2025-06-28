//
//  main.cpp
//  spending - a test application to look at spending
//
//  Created by Charles Phillips on 6/28/25.
//

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

string location;
string day;
string month;
string year;
string cost;
string type;


int main(int argc, const char * argv[]) 

{
string homeDir =getenv("HOME");

string ifname = homeDir + "/Users/charlesphillips/Desktop/common_files/inputs.rtf";
ifstream fin(ifname);


    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
