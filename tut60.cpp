#include<iostream>
#include<fstream>
using namespace std;


/*The useful classes for working with files in c++ are:
1. fstreambase
2. fstream       derived from fstreambase
      
3. ofstream     derived from fstreambase


*/
int main(){
    string st = "Change";
    string st2;
    // opening files using constructor
    ofstream out("sample60.txt");   // write operation
    out<<st;

    ifstream in("sample60b.txt");
    // in>>st2;
    getline(in, st2);
    cout<<st2;
    
    return 0;
}