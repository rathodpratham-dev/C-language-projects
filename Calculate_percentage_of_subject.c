#include <stdio.h>

// Function to calculate percentage
float calcPercentage(int science, int maths, int sanskrit);

int main() {
    int science, maths, sanskrit;

    // Taking input from user
    printf("Enter Marks in Science (out of 100): ");
    scanf("%d", &science);

    printf("Enter Marks in Maths (out of 100): ");
    scanf("%d", &maths);

    printf("Enter Marks in Sanskrit (out of 100): ");
    scanf("%d", &sanskrit);

    // Call the calcPercentage function and print the result
    float totalPercentage = calcPercentage(science, maths, sanskrit);

    printf("Total Percentage is: %.2f%%\n", totalPercentage);

    return 0; // Return 0 to indicate successful execution
}

float calcPercentage(int science, int maths, int sanskrit) {
    int totalMarks = science + maths + sanskrit;   // obtained marks
    int maxMarks = 300;                            // since each subject is out of 100
    float percentage = (totalMarks / (float)maxMarks) * 100.0; 

    return percentage;  // return percentage
}
