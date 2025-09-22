#include <iostream>

int main(){

     int level;
    std::cout << "Welcome to the Number Guessing Game!\n";
    std::cout << "I'm thinking of a number between 1 and 100.\n";
    std::cout << "You have a se number of chances to guess the correct number based on difficulty\n";

    std::cout << "Please select the difficulty level: \n";
    std::cout << "1. Easy (10 chances)\n";
    std::cout << "2. Medium (5 chances\n)";
    std::cout << "3. Hard (3 chances)\n";
   
    int maxAttempts = 0;
while (maxAttempts == 0)
{
    std::cout << "Enter your choice: ";
    std::cin>> level;


    switch(level){
        case 1: std::cout <<"You have chosen Easy difficulty.\n";
            maxAttempts = 10;
            break;
        case 2: std::cout <<"You have chosen Medium difficulty.\n";
            maxAttempts = 5;
            break;
         case 3: std::cout <<"You have chosen Hard difficulty.\n";
            maxAttempts = 3;
            break;
        default: std::cout << "Invalid input please choose again.\n";
            maxAttempts;
            break;
    }
}
    std::cout << "Let's start the game!";


    return 0;
}