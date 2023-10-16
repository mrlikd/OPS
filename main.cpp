#include <string>
#include "stdio.h"
#include "mbed.h"
#include <iostream>

#define COMMA_PAUSE_LENGTH 1000ms
#define DOT_PAUSE_LENGTH 500ms

DigitalOut led(LED1);
/*DigitalOut led(LED1);*/
using namespace std;

void blink(string symb){
    for (int i = 0; i < sizeof(symb); i++) {
        switch(symb[i]){
            case '.':
                led = 1;
                ThisThread::sleep_for(DOT_PAUSE_LENGTH);
                led = 0;
                //cout << ".";
                break;
            case '-': 
                led = 1;
                ThisThread::sleep_for(COMMA_PAUSE_LENGTH);      
                led = 0;
                //cout << "-";
                break;
        }                    
    }
}




// main() runs in its own thread in the OS
int main()
{
    
    string word("david");
    string A(".-");
    string B("-...");
    string C("-.-.");
    string D("-..");
    string E(".");
    string F("..-.");
    string G("--.");
    string H("....");
    string I("..");
    string J(".---");
    string K("-.-");
    string L(".-..");
    string M("--");
    string N("-.");
    string O("---");
    string P(".--.");
    string Q("--.-");
    string R(".-.");
    string S("...");
    string T("-");
    string U("..-");
    string V("...-");
    string W(".--"); 
    string X("-..-");
    string Y("-.--");
    string Z("--..");
    
    int test = 0;
    while (true && test < 1) {
        for (int i = 0; i < sizeof(word); i++) {
            switch(word[i]){
                case 'a':
                    cout<< 'A';
                    blink(A);
                    break;
                case 'd':    
                    cout<< 'D';
                    blink(D);
                    break;
                case 'i':    
                    cout<< 'I';
                    blink(I);
                    break;
                case 'v':    
                    cout << 'V';
                    blink(V);
                    break;
            }   
        }
        test++;
    }
} 