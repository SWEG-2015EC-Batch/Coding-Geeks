1.
Problem Description

#To calculate BMI of a person we need to get the height and weight of a person then we can calculate his or her BMI by dividing the weight of a person by his or her height square.

Problem analysis 

input: Height, weight
output: BMI
process:#Variable declaration(what and how?)
        #Read input(how?)
        #Compute BMI(how)
        #Display output

design the program

#Variable declaration(what and how?)
float person_height,person_weight,person_BMI;
  #Read input(how?)
   cout<<"enter your height:";
   cin>>person_height;
   cout<<"enter your weight:";
   cin>>person_weight;
  #Compute BMI(how)
BMI= (person_weight) / (person_height*person_height)
#Display output
cout<<"your person_BMI is: "<<BMI<<endl;


2.
problem description 

#To calculate the number miles the automobile can be driven without refuelling we need to multiply the capacity in gallons of an automobile and miles per gallons the automobile can be driven to cancel out the gallons and find miles.

problem analysis

input: capacity in gallons, miles per gallons
output: miles
process: 
variable declaration: that include input and output
initializing the program
#Read input(how)
#Compute miles
#Display output

Design the program

variable declaration and initialization (what and how)
float  capacity in gallons, miles_per_gallons, miles
#Read input(how?)
cout<<" Enter capacity in gallons: ";
cin>>capacity;
cout<<" Enter miles per gallons: ";
cin>>miles_per_gallon;
#Compute miles (how?)
miles= (capacity)*(miles_per_gallons)
#Display output:
cout<<" miles_derivable is: "<<miles<<endl;


3.
Problem description 

#To convert a letter either uppercase to lowercase, we are going to have use<ctype.h> library. So, first we have to get both lowercase and uppercase letters then to convert upper to lower we use tolower(uppercase) and from lower to upper we use toupper(lowercase). 

Problem analysis 

Input: uppercase letters, lowercase
output: lower and upper case
process: 
#variable declaration(what and how)
#Read input(how)
#Convert to both lowercase and uppercase letters
#Display output

Design program

variable declaration and initialization (what and how)
char input;
#Read input(how?)
 cout << "Enter a letter: "
 cin >> input;
#convert to both lowercase and uppercase letters (how?)
if (islower(input)) 
 cout << "The uppercase equivalent is: " << (char)toupper(input) << endl;
  else if (isupper(input)) 
   cout << "The lowercase equivalent is: " << (char)tolower(input) << endl;
#Display output:
  cout << "Invalid input. Please enter a letter." << endl;


4.
problem description

#To calculate the result of X raised to the power of Y, X is base and Y is exponent, x^y denotes the result of multiplying x by itself y times.

problem analysis

input: X, Y
out put : the value of X^Y
process:
variable declaration that include input and output
initializing the program
#Read input(how?)
#Compute x^y
#Display output

Design the program

variable declaration and initialization (what and how)
int X, Y, X^Y
#Read input(how?)
cout << "Enter value of X: ";
cin>>Y;
cout << "Enter the value of Y: ";
cin>>y;
#Compute X^Y(how?)
int power=pow( X, Y)
cout<< " power of a given number is: "<<power;


5.
problem description 

#The problem is to create a program that takes input for an employee's name, weekly working hours, bonus rate per hour, and base salary. The program then calculates the employee's gross salary, net salary, and bonus payment. It also needs to apply a pension rate of 5% and a tax rate of 15% to the gross salary.
The program should output the employee's name, gross salary, net salary, and bonus payment.

problem analysis

input: employee name, weekly working hours, bonus rate per hour, and base salary.
output: gross salary, net salary, bonus payment
process :
variable declaration that include input and output
initializing the program
#Read input(how?)
#Compute gross salary, net salary, and bonus payment
#Display output

Design algorithm

Variable declaration and initialization(what and how)
string employee_name
float weeklyWorkingHours, bonusRatePerHour, baseSalary, pensionRate = 0.05, taxRate = 0.15, grossSalary, netSalary, bonusPayment;
#Read input(how)
cout << "Enter employee name: ";
getline (cin, full name );
cout << "Enter weekly_working_hours: ";
cin >> weeklyWorkingHours;
cout << "Enter bonus rate per hour: ";
cin >> bonus_RatePerHour;
cout << "Enter base salary: ";
cin >> base_Salary;
##Compute grossSalary, netSalary, and bonusPayment ( how)
gross_salary=(weekly_hours * base_salary) + (bonus_rate * weekly_hours);
calculate deduction
pension_deduction = 0.05 * gross_salary;
 tax_deduction = 0.15 * gross_salary;
net_salary=gross_salary - (pension_deduction + tax_deduction);
bonus_payment = bonus_rate * weekly_hours;
#Display output
cout << "Employee's Name: " << full_name << endl;
    cout << "Gross Salary: " << gross_salary << endl;
    cout << "Net Salary: " << net_salary << endl;
    cout << "Bonus Payment: " << bonus_payment << endl;


6.
problem description

To write a C++ program that can calculate the time required to send a file over a serial transmission line, the program should take the file size as input and then calculate the time it would take to transmit the entire file at a rate of 960 characters per second. Each character is equivalent to a byte.Since the file size can be quite large, such as 400MB, the program needs to account for the possibility that it may take several days to transmit the file.

problem analysis

input: file_size in bytes, constant transmission_rate
output: transmission_time
process:
variable declaration that include input and output
initializing program
#Read input (how)
#compute transmission_time
#display output

Design and algorithm

Variable declaration and initialization(what and how)
int file_size, transmission_time
#read input(how)
  cout<<" enter the size of the file in bytes: ";
 cin>>file_size;
#compute transmission_time:
transmission_time = file_size / transmission_rate;
 seconds = file_size / transmission_rate;
minutes = seconds / 60;
hours = minutes / 60;
days = hours / 24;
#display output:
cout << "transmission time in Seconds: " << seconds << endl;
    cout << "transmission time in Minutes: " << minutes << endl;
    cout << "transmission time in Hours: " << hours << endl;
    cout << "transmission time in Days: " << days << endl;
Entering the file size: 419430400
It will take approximately,
transmission time in Seconds: 436906
transmission time in Minutes: 7281
transmission time in Hours: 121
transmission time in Days: 5

pseudocode 
step1. start
Read  file size in bytes(S) , Transmission rate(TR) =960 char
 step2. Compute transmission time 
Transmission time(TT)=file size/ transmission rate
TT=S/TR
    seconds=file_size/transmission_rate;
            minutes=seconds/60;
              hours=minutes/60;
                days=hours/24;  
step3. Print transmission time in second, minutes, hours, and days
step4. End
