//
// Created by marcelocarvalho on 14/12/21.
//

/*
 * Write a short program that asks for your height in feet and inches and your weight
in pounds. (Use three variables to store the information.) Have the program report
your body mass index (BMI).To calculate the BMI, first convert your height in feet
and inches to your height in inches (1 foot = 12 inches).Then convert your height
in inches to your height in meters by multiplying by 0.0254.Then convert your
weight in pounds into your mass in kilograms by dividing by 2.2. Finally, compute
your BMI by dividing your mass in kilograms by the square of your height in
meters. Use symbolic constants to represent the various conversion factors.

#include <iostream>
#include <math.h>
int main(){
    int FETTININCH = 12;

    int heightInFeet;
    int heightInInches;
    int weightInPounds;
    std::cout << "Input your heigh in feet:";
    std::cin >> heightInFeet; //Ask for height and inches
    std::cout << "Input your heigh in inches:";
    std::cin >> heightInInches; //Ask for height and inches
    std::cout << "Input your heigh in pounds:";
    std::cin >> weightInPounds; //Ask for height and inches

    std::cout << heightInFeet;

    std::cout << heightInInches;

    std::cout << weightInPounds;
    //Calculate body mass index (BMI)
    int feetToInches;
    feetToInches = heightInFeet * FETTININCH;
    double inchesToM;
    inchesToM = (heightInInches + feetToInches) * 0.0254;

    double poundsToKg;
    poundsToKg = weightInPounds / 2.2;

    float bmi =poundsToKg / pow(inchesToM, 2) ;
    std::cout << "BMI: " << bmi;
    // convert your height in feet

    // and inches to your height in inches (1 foot = 12 inches)
    return 0;
}

 Ex 2
 Write a program that asks the user to enter a latitude in degrees, minutes, and sec-
onds and that then displays the latitude in decimal format.There are 60 seconds of
arc to a minute and 60 minutes of arc to a degree; represent these values with sym-
bolic constants.You should use a separate variable for each input value.


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
 */

#include <iostream>
int main(){
    const int HRS_PER_DAY = 24;
    const int MIN_PER_HR = 60;
    const int SEC_PER_MIN = 60;

    long int seconds;
    int days,hours, minutes, secondsR;

    std::cout << "Enter the number of seconds: ";
    std::cin >> seconds;
    days = seconds / SEC_PER_MIN /MIN_PER_HR / HRS_PER_DAY;
    hours = (seconds / SEC_PER_MIN / MIN_PER_HR) % 24;
    minutes = (seconds / 60) % 60;
    secondsR = seconds % 60;

    std::cout << "days: " << days << " hours: "<< hours << " minutes: " << minutes << " seocnds: " << secondsR;


    return 0;

}