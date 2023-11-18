                                 Algorithm design
#1. write a program that calculates and display body mass index (BMI) of a person. The program should read the height and weight of a person being given and display by the BMI.
1. Problem Description
#To calculate BMI of a person we need to get the height and weight of a person then we can calculate his or her BMIby dividing the weight of a person by his or her height square.
2. Problem analysis
•	input: Height, weight
•	output: BMI
•	process:
#Variable declaration(what and how?)
#Read input(how?)
#Compute BMI(how)
#Display output
3. design the program
	Variable declaration(what and how?)
float person_height,person_weight,person_BMI;
	Read input(how?)
cout<<"enter your height:";
cin>>person_height;
cout<<"enter your weight:";
cin>>person_weight;
	Compute BMI(how)
BMI= (person_weight) / (person_height*person_height)
	Display output
cout<<"your person_BMI is: "<<BMI<<endl;
                         pseudo code
1.	Start 
2.	Read height,weight
3.	Compute BMI, BMI=weight/(height*height)
4.	Print BMI
5.	End
        Flowchat
![1111111111](https://github.com/SWEG-2015EC-Batch/Coding-Geeks/assets/149225623/b279244d-694e-4851-b239-4d5dcfa58c66)



#2. Write a program that prompts the capacity in gallons of automobile fuel tank and the miles per gallons the automobile can be driven. The program outputs the number miles the automobile can be driven without refueling.
1. problem description 
#To calculate the number miles the automobile can be driven we need to multiply the capacity in gallons of an automobile and miles per gallons the automobile can be driven to cancel out the gallons and find miles.
2.problem analysis
•	input: capacity in gallons, miles per gallons
•	output: miles
•	process: 
variable declaration: that include input and output
initializing the program
#Read input(how)
#Compute miles
#Display output
3. Design the program
•	variable declaration and initialization (what and how)
float  capacity in gallons, miles_per_gallons, miles
•	Read input(how?)
cout<<" Enter capacity in gallons ";
cin>>capacity;
cout<<" Enter miles per gallons ";
cin>>miles_per_gallon;
•	Compute miles (how?)
miles= (capacity)*(miles_per_gallons)
•	Display output:
cout<<" miles_derivable is: "<<miles<<endl;

pseudo code
1.	Start
2.	Read capacity(c), miles per gallon(mpg)
3.	Compute miles M=c*mpg
4.	Print miles(M)
5.	End
           Flowchart
        
![22222222222222222](https://github.com/SWEG-2015EC-Batch/Coding-Geeks/assets/149225623/3d881a66-f6c9-4b39-8191-ab5966ec8a90)



#3.write a program that coverts  letter entered from keyboard to its uppercase of lowercase equivalent (hint :- use the function defined in ctype.h library header file).
Problem description 
# To convert a letter either uppercase to lowercase, we are going to have use<ctype.h> library. So, first we have to get both lowercase and uppercase letters then to convert upper to lower we use tolower(uppercase) and from lower to upper we use toupper(lowercase). 
 Problem analysis 
•	Input: uppercase letters, lowercase
•	output: lower and upper case
•	process: 
#variable declaration(what and how)
#Read input(how)
#Convert to both lowercase and uppercase letters
#Display output
. Design program
	variable declaration and initialization (what and how)
char input;
	Read input(how?)
 cout << "Enter a letter: "
 cin >> input;
#convert to both lowercase and uppercase letters (how?)
if (islower(input)) 
 cout << "The uppercase equivalent is: " << (char)toupper(input) << endl;
  else if (isupper(input)) 
   cout << "The lowercase equivalent is: " << (char)tolower(input) << endl;
	Display output:
  cout << "Invalid input. Please enter a letter." << endl;
    pseudocode
1.	Step1: Start
2.	Step2: Include the ctype.h library header file.
3.	Step3: Declare a variable to store the entered letter.
4.	Step4: Prompt the user to enter a letter.
5.	Step5: Read the entered letter from the keyboard and store it in the variable.
6.	Step6: Check if the entered letter is in uppercase using the isupper() function from ctype.h:
7.	   - If true, convert the letter to lowercase using the tolower() function.
8.	   - If false, check if the entered letter is in lowercase using the islower() function:
9.	     - If true, convert the letter to uppercase using the toupper() function.
10.	     - If false, display an error message indicating that the entered character is not a letter.
11.	Step7: Display the converted letter.
12.	Step8: End

Flowchart







          Yes                                                       No  









#4. write a program that find the result of expression x^y where the value of x and y are entered by the user.
1.problem description
To calculate the result of X raised to the power of Y, X is base and Y is exponent, x^y denotes the result of multiplying x by itself y times.
2.problem analysis
•	input: X, Y
•	out put : the value of X^Y
•	process:
variable declaration that include input and output
initializing the program
#Read input(how?)
#Compute x^y
#Display output
3.Design the program
•	variable declaration and initialization (what and how)
int X, Y, X^Y
•	Read input(how?)
cout << "Enter value of X: ";
cin>>x;
cout << "Enter the value of Y: ";
cin>>y;
•	Compute X^Y(how?)
int power=pow( X, Y)
cout<< " power of a given number is: "<<power;
          pseudo code
1.	Step1: Start the program 
2.	Step2: Declare variables X, Y, and result as integers.
3.	Step3: Enter the value of X and Y
4.	Step4: Read the value of X and Y from the keyboard and store it in the X and Y variables respectively.
5.	Step5: Calculate the result of the expression X^Y.
6.	Step6: Display the result to the user.
7.	Step7: End the program.
Flow chart


#5. Design an algorithm and write to read an employee name weekly working hours, bonus rate per hour, and base salary and find the employees gross salary, net salary, and bonus payment. 
(Hint: pension rate =5%, tax =15%)
1. problem description 
#The problem is to create a program that takes input for an employee's name, weekly working hours, bonus rate per hour, and base salary. The program then calculates the employee's gross salary, net salary, and bonus payment. It also needs to apply a pension rate of 5% and a tax rate of 15% to the gross salary.
The program should output the employee's name, gross salary, net salary, and bonus payment.
2.problem analysis
•	input: employee name, weekly working hours, bonus rate per hour, and base salary.
•	output: gross salary, net salary, bonus payment
•	process : variable declaration that include input and output
initializing the program
#Read input(how?)
#Compute gross salary, net salary, and bonus payment
#Display output
3.Design algorithm
•	Variable declaration and initialization(what and how)
string employee_name
float weeklyWorkingHours, bonusRatePerHour, baseSalary, pensionRate = 0.05, taxRate = 0.15, grossSalary, netSalary, bonusPayment;
•	Read input(how)
cout << "Enter employee name: ";
getline (cin, full name );
cout << "Enter weekly_working_hours: ";
cin >> weekly_Working_Hours;
cout << "Enter bonus_rate_per_hour: ";
cin >> bonus_Rate_Per_Hour;
cout << "Enter base_salary: ";
cin >> base_Salary;
•	Compute grossSalary, netSalary, and bonusPayment ( how)
gross salary=(weekly_hours * base_salary) + (bonus_rate * weekly_hours);
calculate deduction
pension_deduction = 0.05 * gross_salary;
 tax_deduction = 0.15 * gross_salary;
net_salary=gross_salary - (pension_deduction + tax_deduction);
bonus_payment = bonus_rate * weekly_hours;
•	Display output
cout << "Employee's Name: " << full_name << endl;
    cout << "Gross Salary: " << gross_salary << endl;
    cout << "Net Salary: " << net_salary << endl;
    cout << "Bonus Payment: " << bonus_payment << endl;
            pseudo code
1. Start
2. Read: employeeName, weeklyWorkingHours, bonusRatePerHour, baseSalary,
3. Calculate gross_salary = (weekly_hours * base_salary) + (bonus_rate * weekly_hours)
4. Calculate pension_deduction = 0.05 * gross_salary
5. Calculate   tax_deduction = 0.15 * gross_salary
6. Calculate net_salary = gross_salary - (pension_deduction + tax_deduction)
7. Calculate bonus_payment = bonus_rate * weekly_hours
8. Display employeeName, grossSalary, netSalary, and bonusPayment
9. End
Flowchart
 
#6. A serial transmission line can transmit 960 characters a second. Write a program that will calculate how long it takes to send a file, given a file size. Test your program on a 400mb(419,430,400 byte) file which may take days.
1. problem description
To write a C++ program that can calculate the time required to send a file over a serial transmission line, the program should take the file size as input and then calculate the time it would take to transmit the entire file at a rate of 960 characters per second. Each character is equivalent to a byte.Since the file size can be quite large, such as 400MB, the program needs to account for the possibility that it may take several days to transmit the file.
2.problem analysis
•	input: file_size in bytes, constant transmission_rate
•	output: transmission_time
•	process: variable declaration that include input and output
initializing program
#Read input (how)
#compute transmission_time
#display output
3.Design and algorithm
•	Variable declaration and initialization(what and how)
int file_size, transmission_time
•	read input(how)
  cout<<" enter the size of the file in bytes: ";
 cin>>file_size;
•	compute transmission_time:
transmission_time = file_size / transmission_rate;
 seconds = file_size / transmission_rate;
minutes = seconds / 60;
hours = minutes / 60;
days = hours / 24;
•	display output:
cout << "transmission time in Seconds: " << seconds << endl;
    cout << "transmission time in Minutes: " << minutes << endl;
    cout << "transmission time in Hours: " << hours << endl;
    cout << "transmission time in Days: " << days << endl;
Entering the file size: 419430400 It will take approximately,
transmission time in Seconds: 436906
transmission time in Minutes: 7281
transmission time in Hours: 121
transmission time in Days: 5
   pseudocode 
1.	start
Read  file size in bytes(S) , Transmission rate(TR) =960 char
2.	Compute transmission time 
Transmission time(TT)=file size/ transmission rate
TT=S/TR
           seconds = file_size / transmission_rate;
            minutes = seconds / 60;
              hours = minutes / 60;
                days = hours / 24;	

3.	Print transmission time in second, minutes, hours, and days

4.	End 

Flowchart



