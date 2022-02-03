//
//  Randomic.hpp
//  Randomic
//
//  Created by René Descartes Domingos Muala on 04/02/22.
//

#ifndef Randomic_h
#define Randomic_h

#include <ctime>

class Randomic {

public:
    
    Randomic(){
        srand((unsigned int)time(NULL));
    }
    
    inline int generate(const int max){
        return rand() % abs(max);
    }
    
    inline int generate(const int min, const int max){
        return (rand() % abs(max-min))+min;
    }
};

#endif /* Randomic_h */
