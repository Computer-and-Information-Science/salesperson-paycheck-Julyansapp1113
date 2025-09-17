[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-22041afd0340ce965d47ae6ef1cefeee28c7c493a6346c4f15d667ab976d596c.svg)](https://classroom.github.com/a/Zzbmb9Oa)
[![Open in Codespaces](https://classroom.github.com/assets/launch-codespace-2972f46106e565e64193e422d61a12cf1da4916b45550586e14ef0a7c637dd04.svg)](https://classroom.github.com/open-in-codespaces?assignment_repo_id=20545169)
# Salesperson's Paycheck

Write a program that will accept as input *from a file* the following information:

* The employee's first name, last name (both string with no spaces)
* The employee's base salary and commission percent (both double)
* The employee's total sales (double)
* The employee's expenses (double)

Your program should calculate the details of the employee's gross pay (total pay without regard to taxes), and output the information to the screen. Your output should be consistent with the sample output below.

When you program runs, it should prompt for the name of the file that contains the input.

Your program should input the employee data from the specified file, compute results, then output to the console.

The input file will be formatted as follows:

* Line 1: Two string words, employee first and last name
* Line 2: Two numbers (double), base salary and commission percent (e.g. 4.5 to represent 4.5%)
* Line 3: One number (double), employee's total sales
* Line 4: One number (double), employee's expenses

Here is a sample input file:

```
Kathryn Janeway
1525.00 3.25
12253.78
195.75
```

Here is a sample run of the program:

```
Payroll data for Kathryn Janeway

Base Salary:    1525.00
Commission:      398.25 (3.2% of 12253.78)
Expenses:        195.75
               --------
Total:          2119.00
```

Your program output should be formatted as shown here. Note number of decimal places for dollar amount and the percentage (they differ). Also, note that dollar amount are aligned on the right.
