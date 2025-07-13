//
//  main.cpp
//  spending - a test application to look at spending and practice C++ input/output. I had receipts laying around
//  9 jul 2025  runs good
//  Created by Charles Phillips on 28 jun 2025
//  currently does read file and outputs to file

#include <iostream>
#include <fstream>
#include <string>

using namespace std;


int main(int argc, const char * argv[]) 

{
    cout<< "in main"<<endl;  // debug step
    
    string location="a"; // set up string + initial value
    string day="b";
    string month="c";
    string year;
    string cost;
    string type;
    
  string line="aaaaaaaaaaaaaa"; // get a line of text and then scan for fields
    
    string homeDir = getenv("HOME");

    string ifname = homeDir + "/Desktop/common_files/inputs.txt";
    string ofname = homeDir + "/Desktop/common_files/outputs";
    
    ifstream fin(ifname);
    ofstream fout(ofname);
    
    int i=0; // prepare to count in the while loop
    
    
    while (i<2)
        
    /*    if(!fin.is_open())
        {
            cout << "file:" << ifname << "is not open, exiting" << endl;
            exit(-1);
        }
      */
        {
            getline(fin, line);  // does not get the line on this step
            
        cout<<"line  "<<  line<<endl;
            
            string location = line.substr(0,6);  // does not read the input file!
            string day = line.substr(7,9);  // does not read the input file!
            
            cout<<"   location  "<<  location<<endl;  // output to "console" ie screen
            cout<< "  day  "<<  day<< endl;
            
            cout<<" i="<< i<<endl;  // debug step
            fout<<"  line   "<< line << endl;  // funny that endl() isn't accepted
            fout<<"  location  "<<  location<< endl;  // output to file
            
            ++i; // increment count
            
        }
        fin.close();
        fout.close();
        return 0;
    }
