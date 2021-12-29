/*
 *  Write a program that asks the user to enter a latitude in degrees, minutes, and sec-
onds and that then displays the latitude in decimal format.There are 60 seconds of
arc to a minute and 60 minutes of arc to a degree; represent these values with sym-
bolic constants.You should use a separate variable for each input value. A sample
run should look like this:
Enter a latitude in degrees, minutes, and seconds:
First, enter the degrees: 37
Next, enter the minutes of arc: 51
Finally, enter the seconds of arc: 19
37 degrees, 51 minutes, 19 seconds = 37.8553 degrees
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
    days = seconds / SEC_PER_MIN / MIN_PER_HR / HRS_PER_DAY;
    hours = (seconds / SEC_PER_MIN / MIN_PER_HR) % 24;
    minutes = (seconds / 60) % 60;
    secondsR = seconds % 60;

    std::cout << "days: " << days << " hours: "<< hours << " minutes: " << minutes << " seocnds: " << secondsR;

    return 0;

}
