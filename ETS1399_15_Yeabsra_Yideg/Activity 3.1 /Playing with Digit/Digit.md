*Problem analysis

1.Input: choice,num

2.Output: menu and solution for each choice

3.Operation:

Do the following

Switch choice from the below cases

a.Reverse Number Function:

-Initialize reversed to 0

-While num is greater than 0, Multiply reversed by 10 and add the last digit of num.

-Update num by dividing it by 10.

-Return reversed.

b.Count Digits Function:

-Initialize count to 0.

-While num is greater than 0, Increment count.

-Update num by dividing it by 10.

-Return count.

c.Sum of Digits Function:

-Initialize sum to 0.

-While num is greater than 0, Add the last digit of num to sum.

-Update num by dividing it by 10.

-Return sum.

d.Product of Even Digits Function:

-Initialize product to 1.

-While num is greater than 0:

-Get the last digit of num.

-If the digit is even, multiply it with product.

-Update num by dividing it by 10.

-Return product.

e.First and Last Digit Function:

-Get the last digit of num.

-While num is greater than or equal to 10, Update num by dividing it by 10.

-Get the first digit of num.

-Calculate the sum of the first and last digit.

f.Swap First and Last Digit Function:

-Calculate the number of digits in num.

-If there is only one digit, return num.

-Form the new number by swapping the first and last digit.

-Return the new number.

g.Is Palindrome Function:

-Return palindrome if num is equal to its reverse; otherwise, return not palindrome

h.Digit Frequency Function:

-Initialize an array frequency to store the frequency of each digit.

-While num is greater than 0, Increment the corresponding element in frequency.

-Update num by dividing it by 10.

-Display the digit frequencies.

i.Is Armstrong Function:

-Calculate the sum of the cubes of each digit.

-Return true if the sum is equal to the original number; otherwise, return false.

j.Is Strong Function:

-Calculate the sum of factorials of each digit.

-Return true if the sum is equal to the original number; otherwise, return false.

k.Is Perfect Function:

-Calculate the sum of divisors.

-Return true if the sum is equal to the original number; otherwise, return false

While choice is different from 0 otherwise end

*Algorithm Design

1.Pseudocode
Step1:start

Step2:for Function ReverseNumber(num):

a.initialize reversed = 0

b.loop While num > 0{reversed = reversed * 10 + num % 10; num = num / 10}

c.End While

d.Return reversed

Step3:for Function CountDigits(num):

a.initialize count = 0

b.loop While num > 0{ count = count + 1; num = num / 10}

c. End While

d. Return count

Step4:for Function SumOfDigits(num):

a.initialize sum = 0

b.loop While num > 0{sum = sum + num % 10; num = num / 10}

c.End While

d.Return sum

Step5:for Function ProductOfEvenDigits(num):

a.initialize product = 1

b.While num > 0:{ digit = num % 10

    If digit is even:{product = product * digit}}
c.End If

d. num = num / 10

e.End While

f.Return product

Step6:for Procedure FirstAndLastDigit(num):

a.lastDigit = num % 10

b.loopWhile num >= 10:{num = num / 10}

c.End While

d.firstDigit = num; sum = firstDigit + lastDigit

e .Display firstDigit, lastDigit, sum

Step7:for Function SwapFirstAndLastDigit(num):

a.digits = CountDigits(num)

b.If digits <= 1:Return num

c.lastDigit = num % 10; firstDigit = num / 10^(digits - 1); middlePart = num % 10^(digits - 1) / 10

d.Return lastDigit * 10^(digits - 1) + middlePart * 10 + firstDigit

Step8:for Function IsPalindrome(num):Return num == ReverseNumber(num)

Step9:for Procedure DigitFrequency(num):

a.Initialize an array frequency[10] to store the frequency of each digit

b .Loop While num > 0:frequency[num % 10] = frequency[num % 10] + 1; num = num / 10

c.End While

d.Display "Digit Frequency"

e.loop For i = 0 to 9: If frequency[i] > 0:

Display i, " ", frequency[i]

f.End If

g.End For

Step10:for Function IsArmstrong(num):

a.initialize originalNum = num, digits = CountDigits(num), sum = 0

b.While num > 0:{ digit = num % 10; sum = sum + digit^digits; num = num / 10}

c.End While

d.Return sum == originalNum

Step11:for Function IsStrong(num):

a.initialize originalNum = num; sum = 0

b.While num > 0:{digit = num % 10;factorial = 1;For i = 1 to digit:{factorial = factorial * I}

c.End For

d.sum = sum + factorial; num = num / 10

e.End While

f.Return sum == originalNum

Step12:for Function IsPerfect(num):

a.initialize sum = 0

b.For i = 1 to num / 2:{ If num % i == 0:{sum = sum + I}

c.End For

d.Return sum == num

Step13 for Main:

a.initialize choice = 1

While choice != 0:

Display Menu

Display "Enter your choice: "

Read choice

Switch choice:

If choice!=0 loop other wise go to step 14

Step14:end



