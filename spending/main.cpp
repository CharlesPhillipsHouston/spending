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

string location="a"; // set up string + initial value
string day="b";
string month="c";
string year;
string cost;
string type;

string line="g"; // get a line of text and then scan for fields

int main(int argc, const char * argv[]) 

{
string homeDir = getenv("HOME");

string ifname = homeDir + "/Users/charlesphillips/Desktop/common_files/inputs.rtf";
ifstream fin(ifname);
    
string ofname = homeDir +"/Users/charlesphillips/Desktop/common_files/outputs.rtf";
    
ofstream fout(ofname);
    int i=0; // prepare to count in the while loop

    while (!fin.eof())
    {
        getline(fin, line);
        fout<<"line"<<line;
        
        string location = line.substr(0,10);
        fout<<"location"<<location<<endl;
        ++i; // increment count
        
    }
    fin.close();
    fout.close();
    return 0;
}
