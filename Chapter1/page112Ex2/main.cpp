
/*
 *  Ex 2
 Write a program that asks the user to enter a latitude in degrees, minutes, and sec-
onds and that then displays the latitude in decimal format.There are 60 seconds of
arc to a minute and 60 minutes of arc to a degree; represent these values with sym-
bolic constants.You should use a separate variable for each input value.

 */
#include <iostream>
int main(){

    const int min2sec = 60;
    const int deg2min = 60;
    std::cout << "Enter a latitude in degrees, minutes, and seconds:"<< std::endl<< "First, enter the degrees:";
    int degree;
    std::cin >> degree;
    std::cout << "Next, enter the minutes of arc:";
    int min;
    std::cin >> min;
    std::cout << "Finally, enter the seconds of arc:";
    int sec;
    std::cin >> sec;
    float min_f = min + float(sec) / min2sec;
    float deg_f = degree + min_f / deg2min;
    std::cout << deg_f;
    std::cout << std::endl<< degree<< " degrees, "<< min<< " minutes, "<< sec<< " seconds = "<< deg_f<< " degrees"<< std::endl;
    return 0;
}