

/*********************************************************************
 ** Author:Terezie Schaller
 ** Date:10-2-15
 ** Description:Week2, project a, average of 5 numbers
 *********************************************************************/
#include <iostream>
#include <string>

using namespace std;

/**************
 **Description: calculates the average of 5 numbers
 **entered by the user
 ****************/

int main() {
    //initialize variables
    double userNum1, userNum2, userNum3, userNum4, userNum5;
    double average;

    //prompt user to enter 5 numbers
    //store user numbers as variables
    cout << "Please enter 5 numbers." << endl;
    cin >> userNum1;
    cin >> userNum2;
    cin >> userNum3;
    cin >> userNum4;
    cin >> userNum5;

    //calculate the average and print answer
    average = (userNum1 + userNum2 + userNum3 + userNum4 + userNum5)/5.0;

    cout << "The average of those numbers is:" << endl;
    cout << average << endl;

    return 0;
}

//added this in git(desktop)->atom on 1/13
