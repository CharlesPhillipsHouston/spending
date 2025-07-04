//
//  main.cpp
//  spending - a test application to look at spending and practice C++
//  3 jul 2025 doesn't run yet :-(
//  Created by Charles Phillips on 28 jun 2025
//  currently does NOT read file, it did grrrr

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
    cout<< "in main"<<endl;

string ifname = homeDir + "/Desktop/common_files/inputs.rtf";
ifstream fin(ifname);
    
string ofname = homeDir + "/Desktop/common_files/outputs.rtf";
    
ofstream fout(ofname);
    int i=0; // prepare to count in the while loop

    while (!fin.eof())
    {
        getline(fin, line);
        cout<<"line"<<line<<endl;
        
        string location = line.substr(0,10);
        cout<<"   location"<<  location<<endl;
      //  fout<<" location"<< location<<endl;   // builds really big file, infinite loop
        ++i; // increment count
        
    }
    fin.close();
    fout.close();
    return 0;
}
