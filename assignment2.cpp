#include <iostream>
using namespace std;

float addition(float x, float y){
    float add;
    add = x + y;
    return add;
}

float subtraction(float x, float y){
    float sub;
    sub = x - y;
    return sub;
}

float multiplication(float x, float y){
    float multiply;
    multiply = x * y;
    return multiply;
}

float division(float x, float y){
    float divide;
    divide = x / y;
    return divide;
}

int main(){
    cout << "CALCULATOR" <<endl;

     start:

    cout << "Enter first number  : " ;
    float fnumber = 0;
    cin >> fnumber;

    cout << "Enter second number : " ;
    float snumber = 0;
    cin >> snumber;
    
    cout << "\n" << endl;

    cout << "Select operator\n1. +\n2. -\n3. *\n4. /" <<endl;
    int opt;
    cout << "operator :";
    cin >> opt;

    cout << "\n" <<endl;

    float ans;

    switch (opt)
    {
    case 1:{ 
        ans = addition(fnumber, snumber);
       // cout << "Answer = " << ans << endl;
    }
        break;

    case 2:{ 
        ans = subtraction(fnumber, snumber);
       // cout << "Answer = " << ans << endl;
    }
        break;

    case 3:{ 
        ans = multiplication(fnumber, snumber);
       // cout << "Answer = " << ans << endl;
    }
        break;

    case 4:{ 
        ans = division(fnumber, snumber);
       // cout << "Answer = " << ans << endl;
    }
        break;
    
    
    default: cout << "invalid input" << endl;
        break;
    }

    cout << "Answer = " << ans << endl;
    
    cout << "would you like to perform another calculation.\ny for Yes and n for No :";
    char option;
    cin >> option;

    switch(option){
    {
        case 'y': {
            system("cls");
            goto start;
        }
        break;
    }
    {
        case 'n': cout << "thanks for using." ;
        break;

    }
    default: cout << "invalid input" << endl;
        break;
    }
    return 0;
}