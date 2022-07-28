/*

* 1. Generate a lottery.
* 2. Ask the user to enter a guess.
* 3. Get digits from the lottery.
* 4. Get digits from the user's guess.
* 5. Check the guess.

*/

// Program that checks to see if a user has
// won a lottery based on certain criteria.

#include <iostream>
#include <ctime>  // for time function
#include <cstdlib>  // for rand and srand functions
using namespace std;

int main()
{
        // Generate a lottery.
    srand(time(0));
    int lotteryNumber = 10 + rand() % 90;

        // Prompt the user to enter a guess.
    cout << "Enter your lottery pick (two digits): ";
    int guess ;
    cin >> guess ;

        // Get digits from the lottery.
    int lotteryDigit1 = lotteryNumber / 10;
    int lotteryDigit2 = lotteryNumber % 10;

        // Get digits from the user's guess.
    int guessDigit1 = guess / 10;
    int guessDigit2 = guess % 10;

    cout << "The lottery number is " << lotteryNumber << endl;

    // Check the guess.

        // Display output for the condition that the guess was the lottery.
    if (guess == lotteryNumber )
        cout << "Exact match: you win $10,000" << endl;

        // Display output for the condition the guess
        // was the lottery but in an incorrect order.

    else if (guessDigit2 == lotteryDigit1
        && guessDigit1 == lotteryDigit2)

        cout << "Match all digits: you win $3,000" << endl;

        // Display output for the condition
        // that the guess had one lottery digit.

    else if ( guessDigit1 == lotteryDigit1
            || guessDigit1 == lotteryDigit2
            || guessDigit2 == lotteryDigit1
            || guessDigit2 == lotteryDigit2 )

        cout << "Match one digit: you win $1,000" << endl;

        // Display output for the condition that a guess had
        // no matching lottery digit or an invalid guess was made.
    else
        cout << "Sorry, no match" << endl;

    return 0;
}
