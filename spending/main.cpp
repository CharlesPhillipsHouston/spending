//
//  main.cpp
//  spending - a test application to look at spending and practice C++
//  5 jul 2025 1620  runs good
//  Created by Charles Phillips on 28 jun 2025
//  currently does read file and outputs to file

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
    cout<< "in main"<<endl;  // debug step

string ifname = homeDir + "/Desktop/common_files/inputs";
ifstream fin(ifname);
    
string ofname = homeDir + "/Desktop/common_files/outputs";
    
ofstream fout(ofname);
    int i=0; // prepare to count in the while loop

    while (!fin.eof())   // this produces infinite loop
//    while (i<2)    // want to read to end of file! This does work
    
    {
        getline(fin, line);  // alternative to fin.getline below
        
        cout<<"line  "<<  line<<endl;
        
        string location = line.substr(0,10);
        cout<<"   location  "<<  location<<endl;  // output to "console" ie screen
        fout<<"  line   "<< line << endl;  // funny that endl() isn't accepted
        fout<<"  location  "<<  location<< endl;  // output to file
        
        ++i; // increment count
        
    }
    fin.close();
    fout.close();
    return 0;
}
