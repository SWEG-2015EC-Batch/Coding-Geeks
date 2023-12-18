*Problem analysis

Input: operator(op),num1,num2

Output: result

Operation:

-Do for each while true

  - If(op== ‘0’) ,exit 
  
    - Switch(op): 
    
         Case“+” result=num1+num2
         
         Case“-” result=num1-num2
         
         Case“*” result=num1*num2
         
         Case“/” if(num2!=0) result=num1+num2 else error
         
      Default error
*Algorthim Design

Pseudocode

Step1:start

Step2:enter num1

Step3:Enter operator(+,-,*,/) or 0 to exit

Step4:if(op==0) display exit and break loop otherwise go to step 5

Step5:enter num2

Step6:switch(op):

 Case“+” result=num1+num2
         
  Case“-” result=num1-num2
         
  Case“*” result=num1*num2
         
  Case“/” if(num2!=0) result=num1+num2 else display error
         
   Default display error
Step7:display result

Step8:end



