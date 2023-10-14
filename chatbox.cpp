#include <iostream>
#include <thread>
#include <chrono>
#include <iomanip>
#include <string>
#include <cmath>
using namespace std;

int main() {
    cout << "     ***** WELCOME TO NSBE CHATBOX ******\n";
    cout << "***** DEDICATED TO SERVING THE PEOPLE OF UNT *****\n";
    cout << "Hello, this is MJ the chatbox. Write something I'm familiar with since I'm still under construction!\n";
    cout << "I understand Hi, What's the weather today?, What's the date today?, What's the day today?, Area, and Math.\n";
    this_thread::sleep_for(chrono::seconds(2));
    cout << "Have Fun!\n";

    string input;

    while (true) {
        cout << "User: ";
        getline(cin, input);

        if (input == "Hi"){
            cout << right << setw(40) << "Hello" << endl;
        }
        else if (input == "What's the weather today?"){
            cout << right << setw(40) << "Quite chilly." << endl;
        }
        else if (input == "What's the date today?"){
            cout << right << setw(40) << "October 14th, 2023." << endl;
        }
        else if (input == "What's the day today?"){
            cout << right << setw(40) << "Saturday." << endl;
        }
        else if (input == "Area"){
            int len, wid;
            cout << right << setw(40) << "Enter the length: ";
            cin >> len;
            cout << right << setw(40) << "Enter the width: ";
            cin >> wid;
            cout << right << setw(40) << "The area is: " << len * wid << endl;

            cin.ignore();
        }
        else if (input == "Math"){
            cout << right << setw(40) << "Choose a math operation:\n";
            cout << right << setw(40) << "1. Addition\n";
            cout << right << setw(40) << "2. Subtraction\n";
            cout << right << setw(40) << "3. Multiplication\n";
            cout << right << setw(40) << "4. Division\n";

            int choice;
            cout << right << setw(40) << "Enter your choice: ";
            cin >> choice;

            int numCount;
            cout << right << setw(40) << "Enter the number of values you want to use: ";
            cin >> numCount;

            int numbers[numCount];

            cout << right << setw(40) << "Enter the numbers:\n";
            for (int i = 0; i < numCount; ++i){
                cout << right << setw(40) << "Number " << i + 1 << ": ";
                cin >> numbers[i];
            }

            switch (choice){
                case 1: {
                    int sum = 0;
                    for (int i = 0; i < numCount; ++i){
                        sum += numbers[i];
                    }
                    cout << right << setw(40) << "The sum is: " << sum << endl;
                    break;
                }
                case 2: {
                    int difference = numbers[0];
                    for (int i = 1; i < numCount; ++i){
                        difference -= numbers[i];
                    }
                    cout << right << setw(40) << "The difference is: " << difference << endl;
                    break;
                }
                case 3: {
                    int product = 1;
                    for (int i = 0; i < numCount; ++i){
                        product *= numbers[i];
                    }
                    cout << right << setw(40) << "The product is: " << product << endl;
                    break;
                }
                case 4: {
                    int quotient = numbers[0];
                    bool divideByZero = false;
                    for (int i = 1; i < numCount; ++i){
                        if (numbers[i] != 0){
                            quotient /= numbers[i];
                        }
                        else{
                            cout << right << setw(40) << "Cannot divide by zero." << endl;
                            divideByZero = true;
                            break;
                        }
                    }
                    if (!divideByZero){
                        cout << right << setw(40) << "The quotient is: " << quotient << endl;
                    }
                    break;
                }
                default:
                    cout << right << setw(40) << "Invalid choice." << endl;
            }

            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        } 
        else if (input == "Bye"){
            cout << "Goodbye! Exiting the chatbox.\n";
            break;
        } 
        else{
            cout << right << setw(40) << "I'm unfamiliar with your entry.\n";
            
            string continueInput;
            do{
                cout << right << setw(40) << "Do you want to continue? (Yes/No): ";
                cin >> continueInput;
                cin.ignore();
            }
            while (continueInput != "Yes" && continueInput != "No");
                 if (continueInput == "No"){
                    cout << "Goodbye! Exiting the chatbox.\n";
                    break;
                }
        }
    }
    return 0;
}
