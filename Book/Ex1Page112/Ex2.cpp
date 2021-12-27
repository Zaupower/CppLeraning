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
 */
#include <iostream>
int main(){
    int FETTININCH = 12;

    int heightInFeet;
    int heightInInches;
    int heightInPounds;
    std::cout << "Input your heigh in feet:";
    std::cin >> heightInInches; //Ask for height and inches
    std::cout << "Input your heigh in inches:";
    std::cin >> heightInInches; //Ask for height and inches
    std::cout << "Input your heigh in pounds:";
    std::cin >> heightInPounds; //Ask for height and inches

//Some print 
std::cout << heightInFeet;

std::cout << heightInInches;

std::cout << heightInPounds;
    //Calculate body mass index (BMI)
    // convert your height in feet
    
    // and inches to your height in inches (1 foot = 12 inches)
    return 0;
}
