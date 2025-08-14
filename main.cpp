#include <iostream>
#include <ctime>
int main()
{
    int num;
    int guess;
    int tries;
    
    srand(time(0));
    
    num = (rand() % 100 + 1);
    
    std::cout << "Number Guessing Game" << std::endl;
    
    do{
       std::cout << "Enter the Number Guess: ";
       std::cin >> guess;
       tries++;
       if(guess > num){
           std::cout << "Guess is too high" << std::endl;
       }
       else if (guess < num){
        std::cout << "Guess is too low" << std::endl;   
       }
       else{
        std::cout << "You Got Right Number, Your Number of tries is " << tries << std::endl;
       }
    }while(guess != num);
    return 0;
}
