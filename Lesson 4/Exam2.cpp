#include <iostream>

double getTowerHeight()
{
    // First, get the input for the tower height
    std::cout << "Enter the height of the tower in meters: ";
    double towerHeight{};
    std::cin >> towerHeight;

    return towerHeight;
}

double calculateBallHeight(double towerHeight, int seconds)
{
    // distance fallen = gravity_constant*x_seconds^2/2

    // ballHeight = towerHeight - distance fallen

    // For the parameter, the tower height inputted by the user will be recorded along with the second and calculated
    // in this function

    // Second, calculate the distance the ball has fallen using the equation
    // add in the case where if the ball height is less than or equal to 0, the height is equal to 0
    // otherwise, return the ball height value

    double gravity{9.8};

    double distanceFallen{(gravity*seconds*seconds)/2};

    double ballHeight{towerHeight - distanceFallen};

    if (ballHeight <= 0)
    {
        return 0.0;
    }

    return ballHeight;

}

void printBallHeight(double ballHeight, int seconds)
{
    // This is for printing the ball height AFTER the first function has done its calculation of the ball height
    // when the ball height is less than or equal to 0, it prints the ball being at ground level
    // else, it prints the height at a certain time

    // Note: unlike the previous function, the parameter towerHeight is not used here because ball height
    // has already been calculated and tower height is not needed here

    if (ballHeight <= 0)
    {
        std::cout << "At " << seconds << " seconds, the ball is on the ground.\n";
    }
    else
    {
        std::cout << "At " << seconds << " seconds, the ball is at a height: " << ballHeight << " metres.\n";
    }
}

void calculateAndPrintBallHeight(double towerHeight, int seconds)
{
    // This is called a helper function
    // It helps to bring the two functions together so that, they work together

    // This time, the parameter towerHeight is used here now because the double value ballHeight is dependent on
    // towerHeight value being fed into the function that calculates the ball height along with seconds

    // After the ballHeight is calculated, the printBallHeight function is called to finally print the output

    double ballHeight{calculateBallHeight(towerHeight, seconds)};

    printBallHeight(ballHeight, seconds);
}

int main()
{
    // The entire program is dependent on the user inputting a double value for towerHeight
    // after the value is inputted and the time in second, calculateBallHeight is called first, 
    // printBallHeight is called after the ballHeight value is fed into it
    // lastly, the helper function gets the ball height from calculateBallHeight and calls
    // printBallHeight at last to print the output to the terminal

    double towerHeight{getTowerHeight()};

    calculateAndPrintBallHeight(towerHeight, 0);
    calculateAndPrintBallHeight(towerHeight, 1);
    calculateAndPrintBallHeight(towerHeight, 2);
    calculateAndPrintBallHeight(towerHeight, 3);
    calculateAndPrintBallHeight(towerHeight, 4);
    calculateAndPrintBallHeight(towerHeight, 5);

    return 0;
}
