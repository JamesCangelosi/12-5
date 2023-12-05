#include <iostream>
#include <fstream>
#include <string>
using namespace std;
const int MAX=10; //should always initialize const

// search pattern
bool isPrime(int n){
    bool isPrime=true; // search pattern; search for a case that breaks our hypothesis
    for(int i=2; i<n; i++){
        if(n%i==0){
            isPrime = false;
            break;
        }
    }
    return isPrime;
}

int main() {
    // VARIABLE SHADOWING
    int lines = 10;
    for(lines =0; lines < MAX; lines++){
        cout << lines << " "; // prints numbers 0-9

    }
    cout << lines << endl; // prints 10 because the lines variable in the loops is shadowing the one in the main statement

    // int vs float division
    // it is only int division when 2 integers are involved
    int i1 = 10;
    int i2 = 3;
    float f1 = 10;
    float f2 = 3;

    cout << "i1/i2" << i1/i2 << endl; // =3 it is integer division; int/int
    cout << "i1/i2" << i1/f2 << endl; // =3.333 it is float division; int/float
    cout << "i1/i2" << f1/i2 << endl; // =3.333 it is float division; float/int
    cout << "i1/i2" << f1/f2 << endl; // =3.333 it is float division; float/int

    // Binary math; not coding just fucking google it moron

    //input/output files
    //advent 2021 day 1
    ifstream fin("depth.txt");
    string line;
    int counter;

    while(getline(fin, line) && !fin.eof()){

    }

    // accumulator pattern below segundary diagonal
    float arr[] = {1,2,3,4,5};
    float acc=0;
    for(int i = 0; i<=4; i++){
        acc+=[i]; // accumulate into acc the value of the element of the array at position 1
    }

    // search pattern for greatest or least
    float art[] = {10,77,12,52,11};
    float greatest = art[0];
    for(int i=1; i<5; i++){
        if (greatest<art[i])
            greatest = art[i];
    }

    // infinity loops
    int i=0;
    //if this was run without loops it would be infinite since it would never accumulate
    while(i<10){
        cout << i << " ";
        i++;
    }
}
