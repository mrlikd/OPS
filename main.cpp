#include <string>
#include <chrono>
#include "mbed.h"
#include "Morse.h"

// main() runs in its own thread in the OS
int main()
{
    
    string word("DAVID");
    
    while (true) {
        playMorse(word);    
    }
    return 1;
} 