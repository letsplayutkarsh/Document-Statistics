#include <bits/stdc++.h>
#include <iostream>
#include "../includes/Task4.h"
using namespace std;

int main(){
    //taking filename from the user
    string filename;
    cin>>filename;
    //assign output filename

    // part to seprate filename name and extension from the input
    vector<string> format;
    stringstream s(filename);
    string sub;
    while(getline(s,sub,'.')){
        format.push_back(sub);
    }

    int n=format.size();

    if(format[n-1]=="txt"){

        //making class object
        Task4 f(filename);
        //to process input file
        f.read();
        //to write in outputfile
        f.write();

        //printing on terminal
        cout<<f.getNumLines()<<" "<<f.getNumWords()<<" "<<f.getNumCharSpace()<<" "<<f.getNumChar()<<" "<<f.getBytes()<<endl;
    }

    return 0;
}
