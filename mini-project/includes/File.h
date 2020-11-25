#ifndef FILE_H_
#define FILE_H_
    
    #include <bits/stdc++.h>
    #include <iostream>
    using namespace std;

    class File
    {
    public:
        virtual bool read() = 0;
        virtual bool write() = 0;
    };

#endif 
