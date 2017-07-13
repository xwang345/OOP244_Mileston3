//
// Created by zhi on 2017-07-12.
//

#ifndef MS3_STREAMABLE_H
#define MS3_STREAMABLE_H
#include "MyFile.h"
#include <iostream>
#include <cstring>
#include <string>
using namespace std;

namespace sict{
    class Streamable {

        virtual fstream& store(fstream& file, bool addNewLine = true)const =0;
        virtual fstream& load(fstream& file) = 0;
        virtual ostream& write(ostream& os, bool linear)const =0;
        virtual istream& read(istream& is) = 0;
    };
}

#endif //MS3_STREAMABLE_H
