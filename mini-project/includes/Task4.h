#include <bits/stdc++.h>
#include <iostream>
#include "../includes/File.h"
using namespace std;

#ifndef Task4_H
#define Task4_H

//declaring class FileReader
class Task4 : public File {
private:
    //declaring variables
    int numLines,numWords,numSpace,numChar,bytes,numchar_nounicode;
    string filename;
    ifstream fin;
    fstream fout;
    string outputfile;

    //to count subwords of a word eg:- (word1)(word2) has 2 word
    int countSubWords(string word);
    //to count no of words (i.e counting refering spaces)
    int countWords(string line);
    //to count no of chars (without spaces)
    int countChars(string line);

public:
    Task4(string fileName);
    //driver function to process file
    bool read();
    //function to write in outputfile
    bool write();
    // void write(string content_to_write, int size);

    //return variables
    int getNumWords();
    int getNumLines();
    int getNumCharSpace();
    int getNumChar();
    int getBytes();
};

#endif
