#include <iostream>
#include <cmath>
#include <string>
#include <fstream>

float Operators(int input, float number){
    float second_number = 0.0f;
    std::string user_input;
    if(input == 1){
        printf("What number do you want to multiply: \n");
        std::cin >> user_input;
        second_number = std::stof(user_input);
        return number * second_number;
    }
    else if(input == 2){
        printf("What number do you want to divide: \n");
        std::cin >> user_input;
        second_number = std::stof(user_input);
        return number / second_number;
    }
    else if(input == 3){
        printf("What number do you want to add: \n");
        std::cin >> user_input;
        second_number = std::stof(user_input);
        return number + second_number;
    }
    else if(input == 4){
        printf("What number do you want to subtract: \n");
        std::cin >> user_input;
        second_number = std::stof(user_input);
        return number - second_number;
    }
    else if(input == 5){
        printf("What number do you want to exponent: \n");
        std::cin >> user_input;
        second_number = std::stof(user_input);
        return pow(number, second_number);
    }
    return 0.0f;
}

int main(){
    int choice;
    int counter = 0;
    std::string user_input;
    float number = 0.0f;
    while (true){
        if(counter == 0){
            printf("Enter a number\n");
            std::cin >> user_input;
            number = std::stof(user_input);
        }
        printf("Your Current Value is: %0.2f\n", number);
        printf("Options: \n");
        printf("1) Multiplication \n"); 
        printf("2) Division \n");
        printf("3) Addition \n");
        printf("4) Subtraction \n");
        printf("5) Exponent \n");
        printf("6) Print to File and Exit\n");
        std::cin >> choice;
        if(choice == 6){
            std::ofstream file;
            file.open("result.txt");
            file << "Your result is: " << number << std::endl;
            file.close();
            break;
        }
        number = Operators(choice, number);
        printf("%0.2f\n\n", number);
        counter++;
        std::cin.ignore();  
    }
}