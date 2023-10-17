#include <string>
#include <chrono>
#include "mbed.h"

#define COMMA_PAUSE_LENGTH 1000ms
#define DOT_PAUSE_LENGTH 500ms

DigitalOut led(LED1);

void blink(string symb){
    for (int i = 0; i < sizeof(symb); i++) {
        switch(symb[i]){
            case '.':
                led = 1;
                ThisThread::sleep_for(DOT_PAUSE_LENGTH);
                led = 0;
                ThisThread::sleep_for(DOT_PAUSE_LENGTH);
                //cout << ".";
                break;
            case '-': 
                led = 1;
                ThisThread::sleep_for(COMMA_PAUSE_LENGTH);      
                led = 0;
                ThisThread::sleep_for(COMMA_PAUSE_LENGTH);
                //cout << "-";
                break;
        }                    
    }
}




// main() runs in its own thread in the OS
int main()
{
    
    string word("DAVID");
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
    
    while (true) {
        for (int i = 0; i < sizeof(word); i++) {
            switch(word[i]){
            case 'A':
                blink(A);
                break;
            case 'B':
                blink(B);
                break;
            case 'C':
                
                blink(C);
                break;
            case 'D':
                
                blink(D);
                break;
            case 'E':
                
                blink(E);
                break;
            case 'F':
                
                blink(F);
                break;
            case 'G':
                
                blink(G);
                break;
            case 'H':
                
                blink(H);
                break;
            case 'I':
                
                blink(I);
                break;
            case 'J':
                
                blink(J);
                break;
            case 'K':
                
                blink(K);
                break;
            case 'L':
                
                blink(L);
                break;
            case 'M':
                
                blink(M);
                break;
            case 'N':
               
                blink(N);
                break;
            case 'O':
                
                blink(O);
                break;
            case 'P':
                
                blink(P);
                break;
            case 'Q':
                
                blink(Q);
                break;
            case 'R':
                
                blink(R);
                break;
            case 'S':
                
                blink(S);
                break;
            case 'T':
                
                blink(T);
                break;
            case 'U':
                
                blink(U);
                break;
            case 'V':
                
                blink(V);
                break;
            case 'W':
                
                blink(W);
                break;
            case 'X':
                
                blink(X);
                break;
            case 'Y':
                
                blink(Y);
                break;
            case 'Z':
                
                blink(Z);
                break;
            }   
        }
        
    }
} 