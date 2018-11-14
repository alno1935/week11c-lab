#include <iostream>
#include <string>
#include <math.h>

using namespace std;

int equationType;
//a to b equals c
float a;
float b;
float c; //declaring the variables

void speak( string text, int numNewLines){
    cout << text;
    for(int count=0; count < numNewLines; ++count) {
        cout << endl;
    } //making function to talk and space lines out
}

double addition(float a, float b) {
    c = a + b;
    return c;
} //function for addition

double subtraction(float a, float b) {
    c = a - b;
    return c;
} //function for subtracting

double division(float a, float b){
    c = a / b;
    return c;
} // function for dividing

double multiplication(float a, float b){
    c = a * b;
    return c;
} //function for multiplying

double squareRoot(float a){
    c = sqrt(a);
    return c;
} // function to get square root

double exponent(float a, float b){
    c = pow(a,b); //base number first (a), then exponent second (b).
    return c;
} // function for exponents


int main() {
    while(1==1) { // ensures the program will loop infinitely
        speak("Please enter What kind of equation you would like to perform.", 2); //asking user for type of equation
        
        speak("1: Addition.", 1);
        speak("2: Subtraction.", 1);
        speak("3: Division.", 1);
        speak("4: Multiplication.", 1);
        speak("5: Square Root.", 1);
        speak("6: Exponents.", 1); // options availble for user to select

        cin >> equationType;
        if(equationType == 1) {
            speak("ADDITION", 3);
            speak("Please Enter the two numbers you would like to add together.", 2); //instructions for user
            cin >> a >> b; //user input
            
            cout << "Your answer is " << addition(a, b) << endl; //calling function


        } else if(equationType == 2) {
            speak("SUBTRACTION", 3);
            speak("Please add the two numbers you would like to know the difference of.", 2);//instructions for user
            cin >> a >> b;//user input

            cout << "Your answer is " << subtraction(a, b) << endl;//calling function

        } else if (equationType ==3) {
            speak("DIVISION", 3);
            speak("Please enter the two numbers you would like the quotient of.", 2);//instructions for user
            cin >> a >> b;//user input

            cout << "Your Answer is " << division(a, b) << endl;//calling function
        } else if (equationType ==4) {
            speak("MULTIPLICATION", 3);
            speak("Please enter two numbers you would like the product of.", 2);//instructions for user
            cin >> a >> b;//user input

            cout << "Your answer is " << multiplication(a, b) << endl;//calling function
        } else if (equationType == 5) {
            speak("SQUARE ROOT", 3);
            speak("Please enter the number you would like the square root of.", 2);//instructions for user
            cin >> a;//user input

            cout << "Your answer is " << squareRoot(a) << endl;//calling function
        } else if (equationType ==6) {
            speak("EXPONENTS", 3);
            speak("Please enter the base number first, then enter the exponent You would like.", 2);//instructions for user
            cin >> a >> b;//user input

            cout << "Your Answer is " << exponent(a, b) << endl; //calling function
        } else { 
            speak("Please enter a number between 1 and 6.", 2);//instructions for user
        }
    }
}