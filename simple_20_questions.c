#include <stdio.h>
#include <stdbool.h>

// Define a structure to hold question and answer data
typedef struct {
    char *question;
    bool answer; // true for Yes, false for No
} Question;

// Example questions - expand this list based on your game design
Question questions[] = {
    {"Is it a living thing?", false},
    {"Is it larger than a breadbox?", true},
    // Add more questions here
};

int main() {
    printf("Welcome to the 20 Questions game!\n");
    // Game logic to ask questions and handle user responses goes here
    return 0;
}