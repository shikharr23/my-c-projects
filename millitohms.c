#include <stdio.h>

int main() {
    long long milliseconds, hours, minutes, seconds;

    // Read the number of milliseconds from the user
    printf("Enter the number of milliseconds: ");
    scanf("%lld", &milliseconds);

    // Calculate the number of hours, minutes, and seconds
    hours = milliseconds / 3600000;  // 1 hour = 3600000 milliseconds
    milliseconds %= 3600000;         // Remaining milliseconds after extracting hours

    minutes = milliseconds / 60000;  // 1 minute = 60000 milliseconds
    milliseconds %= 60000;           // Remaining milliseconds after extracting minutes

    seconds = milliseconds / 1000;   // 1 second = 1000 milliseconds

    // Print the result
    printf("%lld milliseconds = %lld hours, %lld minutes, %lld seconds\n", 
           milliseconds + hours * 3600000 + minutes * 60000 + seconds * 1000, 
           hours, minutes, seconds);

    return 0;
}
