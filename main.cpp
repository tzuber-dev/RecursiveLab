#include <iostream>

#include "src/hello.hpp"

#include <string>

using namespace std;




//problem 1
double func1(int f) {
    if (f==1) {
        return 1.0;
    };
    return (1.0/f)+func1(f-1);
};

//problem 2
bool func2(string rt) {

    if (rt.length() <=1) {
        return true;
    };

    if (rt[0] != rt[rt.length()-1]) {
        return false;
    };

    return func2(rt.substr(1, rt.length()-2));

};


//problem 3

void func3(int x) {
    if (x==0) {
        return;
    };
    func3(x-1);
    for (int r =0; r<x; r++ ) {
        std::cout<< "*";
    };
    std::cout<<endl;
};









int main() {


    // code to problem 1
    int num;
    string stringgiven;
    int triangle;


    std::cout<<"Provide number for harmonic problem: "<<"\n";
    std::cin>>num;
    std::cout<<"Harmonic number of "<<num<<" is: "<<func1(num)<<"\n";


    // code to problem 2

    std::cout<<"Provide a word for the palindrome: "<<"\n";
    std::cin>>stringgiven;

    if (func2(stringgiven)) {
        std::cout<<"The word "<<stringgiven<<" is a valid palindrome! "<<"\n";
    } else {
        std::cout<<"The word "<<stringgiven<<" is not a valid palindrome! "<<"\n";

    }
    std::cout<<endl;

    // code to problem 3

    std::cout<<"Provide number to create triangle: "<<"\n";

    std::cin>>triangle;
    func3(triangle);
    return 0;
    };



;



