#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;

#define RESET "\033[0m"
#define RED "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define BLUE "\033[34m"
#define CYAN "\033[36m"
#define BOLD "\033[1m"

struct Quote {
    string text;
    string author;
};

vector<Quote> quotes = {
    {"The only limit to our realization of tomorrow is our doubts of today.", "Franklin D. Roosevelt"},
    {"Do what you can, with what you have, where you are.", "Theodore Roosevelt"},
    {"Success is not final, failure is not fatal: it is the courage to continue that counts.", "Winston Churchill"},
    {"Believe you can and you're halfway there.", "Theodore Roosevelt"},
    {"Your time is limited, so don’t waste it living someone else’s life.", "Steve Jobs"}
};

void showQuote() {
    int index = rand() % quotes.size();

    cout << CYAN << "\n====================================\n" << RESET;
    cout << BOLD << BLUE << "?? Quote:\n" << RESET;
    cout << YELLOW << "\"" << quotes[index].text << "\"" << RESET << endl;
    cout << GREEN << "— " << quotes[index].author << RESET << endl;
    cout << CYAN << "====================================\n" << RESET;
}

// Menu
void menu() {
    cout << BOLD << CYAN << "\n===== Random Quote Generator =====\n" << RESET;
    cout << BLUE  << "1. New Quote\n";
    cout << GREEN << "2. Exit\n" << RESET;
    cout << "Choose: ";
}

int main() {
    srand(time(0)); // seed random

    int choice;

    showQuote();

    while (true) {
        menu();
        cin >> choice;

        switch (choice) {
            case 1:
                showQuote();
                break;
            case 2:
                cout << GREEN << "Goodbye!\n" << RESET;
                return 0;
            default:
                cout << RED << "Invalid choice.\n" << RESET;
        }
    }
}
