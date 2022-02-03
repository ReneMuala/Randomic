//
//  main.cpp
//  Randomic
//
//  Created by René Descartes Domingos Muala on 04/02/22.
//

#include <iostream>
#include "Randomic.hpp"

using namespace std;

int main(int argc, const char * argv[]) {
    Randomic generator;
    
    cout
    << generator.generate(100) << endl
    << generator.generate(-100, 100) << endl;
    return 0;
}
