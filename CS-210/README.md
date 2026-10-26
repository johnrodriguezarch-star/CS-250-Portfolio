# CS 210 Project Two - Airgead Banking
# Summarize the project and what problem it was solving.
Here is an investment calculator I made for Airgead Banking in C++ input the initial investment amount, monthly deposit, annual interest rate, and number of years. The calculator will show you your investment both with and without monthly deposits so you can see how much more money you'll make through the addition of monthly deposits.

# What did you do particularly well?
Generally I think I managed a good job of structuring the program and isolating different pieces of the work. I made an investment calculator class so that I didn't clutter main with calculations. I also added input validation, so the program will not run if the user enters a negative number or an invalid value. The output is formatted into tables to make it more user friendly.

## Where could you enhance your code? How would these improvements make your code more efficient, secure, and so on?
One aspect that could be improved is input validation. Currently, the program ensures that values are positive, but it could be adapted to allow for different types of input. For instance, a monthly deposit of zero might be acceptable if the user does not intend to make monthly deposits. And, separating some of the display formatting from the calculation logic could make the program easier to update and maintain if the output requirements changed later.

#Which pieces of the code did you find most challenging to write, and how did you overcome this? What tools or resources are you adding to your support network?
The hardest aspect of this project was ensuring that the monthly interest calculations were accurate and that the program monitored the interest earned for the year. I had to approach it month-by-month instead of calculating the interest at once. Pseudocode helped me to understand what order the calculations had to go in, and course resources, examples, and testing different values enabled me to work through the project.

#What skills from this project will be particularly transferable to other projects or course work?
A major skill I can transfer from this project is using classes to organize a program. I also gained more experience with loops functions user input validation, formatted output, and calculations in C++. Breaking a larger problem into smaller functions and methods will be useful in future programming courses and larger projects.

#How did you make this program maintainable, readable, and adaptable?
I improved the readability of the program by splitting the header and implementation files for the class InvestmentCalculator. I also chose clear names for variables and functions like initialInvestment, monthlyDeposit, displayWithMonthlyDeposits, and displayWithoutMonthlyDeposits. I added comments throughout the program to help explain key points. Having the calculation elements within the InvestmentCalculator class made me feel more comfortable to change and/or extend the program in the future, without having to modify the whole main function.****
