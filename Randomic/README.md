# Randomic

A simple library to generate random integer (int32_t) numers in C++.

## Get started

1. copy `Randomic.hpp` to your project folder
2. include the header to your cpp file by `#Include “Randomic.hpp”`
3. Create a `Randomic` variable instance
4. use `Randomic::generate(MAX)`to generate a number from 0 to MAX-1
5. use `Randomic::generate(MIN,MAX)` to generate a number from MIN to MAX-1

### Example

Generate a number from -5 to 10-1

```other
#include <iostream>
#include "Randomic.hpp"

using namespace std;

int main(int argc, const char * argv[]) {
    Randomic generator;
    
    cout << generator.generate(-5, 10) << endl;
    return 0;
}
```
