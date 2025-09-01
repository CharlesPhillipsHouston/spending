//
//  main.cpp
//  spending - a test application to look at spending and practice C++ input/output. I had receipts laying around
//  22 aug 2025  runs good
//  Created by Charles Phillips on 28 jun 2025
//  currently does read file and outputs to file

#include <iostream>
#include <fstream>
#include <string>

using namespace std;


int main(int argc, const char * argv[]) 

{
   // cout<< "in main"<<endl;  // debug step
    
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
    
    while (!fin.eof())
  
     /*
      if(!fin.is_open())
        {
            cout << "file:" << ifname << "is not open, exiting" << endl;
            exit(-1);
        }
   else
     {
         cout << "file:" << ifname << " is open, proceeding" << endl;
         return(0);
     }
 */
        {
            getline(fin, line);  // does not get the line on this step
            
        cout<<"line: "<<  line<<endl;
        
            string location = line.substr(0,15);  // this assigns the first eleven char to "location"
            
            size_t pos = line.find("\t"); // first "position" find a tab in line
                    // pos = position??
            string day = line.substr (pos +1,3); // get second field nine char
       
            size_t pos1 = line.find("\t"); // second "position" find a tab in line
                    // pos = position??
            string month = line.substr (pos1 +1,3); // get second field nine char
       
            size_t pos2 = line.find("\t"); // third "position" find a tab in line
                    // pos = position??
            string year = line.substr (pos2 +1,3); // get second field nine char
       
            cout<<"   location:  "  <<  location <<endl;  // output to "console" ie screen
            cout << "  day: "<< day<< endl;
            cout << "  month:  " << month << endl;
            cout << "  year: " << year << endl;
            
            
       //     string location = line.find("\t");  // does not read the input file!
       //     string day = line.substr("\t");  // does not read the input file!
            
       
     //       cout<< "  day  "<<  day<< endl;
            
       //     cout<<" i="<< i<<endl;  // debug step
            fout<<"  line:   "<< line << endl;  // funny that endl() isn't accepted
            fout<<"  location:  "<<  location<< endl;  // output to file
            fout << "  day:  " << day << endl;
            fout << "  year:  " <<  year << endl;
            
            ++i; // increment count
            
        }
        fin.close();
        fout.close();
        return 0;
    }
