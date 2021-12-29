/*
 * Write a short program that asks for your height in feet and inches and your weight
in pounds. (Use three variables to store the information.) Have the program report
your body mass index (BMI).To calculate the BMI, first convert your height in feet
and inches to your height in inches (1 foot = 12 inches).Then convert your height
in inches to your height in meters by multiplying by 0.0254.Then convert your
weight in pounds into your mass in kilograms by dividing by 2.2. Finally, compute
your BMI by dividing your mass in kilograms by the square of your height in
meters. Use symbolic constants to represent the various conversion factors.
*/

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
