//This C++ program manages student data for a specified number of students, 
//allowing the user to input student IDs and answers to a set of questions. 
//It calculates scores and grades based on the correctness of the answers, 
//provides options to display all students' IDs, answers, scores, and grades, 
//search for a student by ID, display all students' grades, and 
//display the top-performing students based on their scores. 
//The program utilizes arrays, loops, and conditional statements to handle multiple students' data and
//interactions with the user efficiently.

#include <iostream>
#include <string>

using namespace std;

const int NUM_QUESTIONS = 20;
const int NUM_STUDENTS = 3; // this program is arranged for 3 students just for example but it can take more than 150 students data
const int top = 2;


int main() {
    int l;
     int top[l];
   // double top[top];
    string correctAnswers[NUM_QUESTIONS] = {"true","true","true","true","true","true","true","true","true","true","a","b","c","a","d","subordinate","pessimism","optimism","marketing","absolutely"};
    string studentIDs[NUM_STUDENTS];
    string studentAnswers[NUM_STUDENTS][NUM_QUESTIONS];
    int scores[NUM_STUDENTS];
    char grades[NUM_STUDENTS];
    int topstudent=2;

    int choice=1;
       label2:
if (choice==1) {
 cout << "ENTER students id and answer to process\n";
//case 1:
     //receive id and answer of the students
    //receive id and ansewer of the students
 for (int s=0;s<NUM_STUDENTS;s++){

 cout<<"ENTER STUDENT ID :";
 cin >> studentIDs[s];
cout<<"entered id of student "<<studentIDs[s]<<" answer."<<endl;
cout << "\n";
cout<<"ENTER ANSWER OF 10 T/F ,5 CHOICE AND 5, SHORT ANSEWER.............. "<<endl;
cout<<"...............ALL ANSEWER MUST BE IN SMALLCASE LETTER..................."<<endl;
for (int t=0;t<NUM_QUESTIONS;t++){
cout<<"enter the question "<<t+1<<" answer :";
cin>>studentAnswers[s][t]; //receive the answers s is id of student ,t is each answer of the student of id in s
               }
            }

    // once Calculate scores and grades to use it every place in the program
         
for (int i = 0; i < NUM_STUDENTS; i++) {
scores[i] = 0; // Initialize score
for (int j = 0; j < NUM_QUESTIONS; j++) {
  if (studentAnswers[i][j] == correctAnswers[j]) {
        scores[i] += 2;}
            else  {
               scores[i] += 1;
                      }
            }
        // Inline grade calculation
double percentage = ((double)scores[i] / (2 * NUM_QUESTIONS)) * 100; //change score to 100
  if (percentage >= 90) grades[i] = 'A';
 else if (percentage >= 80) grades[i] = 'B';
else if (percentage >= 70) grades[i] = 'C';
else if (percentage >= 60) grades[i] = 'D';
else grades[i] = 'F';
    }
    //after process it display the result of entered score because we didn't use break statement.this means it goes to case 2 to display all result
     goto label;
        }
   label:
 cout << "\n"; //to have space above menu
 cout << "\n";
 cout << "...................Menu:.................\n";
 cout << "ENETR 1. RE-ENTER students id and ansewer to process\n";
 cout << "ENETR 2. Display all students' ID, ansewer, scores and grades\n";
 cout << "ENETR 3. Search for a student by ID\n";
 cout << "ENTER 4. Display all students' grades\n";
 cout << "ENTER 5. Display TOP 5 students\n";
 cout<<"ENTER 6. exist the program:";
 cout << "Enter your choice: ";
 cin >> choice;
 cout << "\n";



if (choice==1)
 goto label2;

 else if (choice==2){
        //case 2:

     // Display all students' scores and grades
     for (int i = 0; i < NUM_STUDENTS; i++) {
    cout << "Student ID: " << studentIDs[i]<< endl;
         cout<<"   ANSEWER :";
     for (int k = 0; k < 20; k++){
    cout<<studentAnswers[i][k];
          cout<<",";
     }
         cout<<"   ";

    double percentage = ((double)scores[i] / (2 * NUM_QUESTIONS)) * 100; //change score of one student to 100 and desplay by loop
    cout  << ", Score/100: " << percentage
      << ", Grade: " << grades[i] << endl;
                }
      goto label;
        }//break;

      else if (choice==3){
        //case 3: {
          // Search for a student by ID
         string id;
         cout << "Enter student ID to search: ";
         cin >> id;
         bool found = false;
        for (int i = 0; i < NUM_STUDENTS; i++) {
        if (studentIDs[i] == id) { //if id match display iD
        cout << "Student ID: " << studentIDs[i];

        cout<<"   ANSEWER: ";
        for (int a = 0; a < 20; a++){ //DESPLAY THE ANSEWER BY LOOPING
          cout<<studentAnswers[i][a];
             cout<<",";
                       }

       double percentage = ((double)scores[i] / (2 * NUM_QUESTIONS)) * 100; //DEPLAY SCORE
        cout << ", SCORE OUT OF 100: " << percentage
         << ", Grade: " << grades[i] << endl; //DISPLAY GRADE
        found = true;
       break;
                    }
                }
      if (!found) { //IF ID NOT MATCH
                    cout << "Student ID not found." << endl;
                }
       goto label;//break;
            }


    else if (choice==4){
       // case 4: {
                // Display all students' grades
    for (int i = 0; i < NUM_STUDENTS; i++) {
    cout << "Student ID: " << studentIDs[i]<< ", Grade: " << grades[i] << endl;
                }
          goto label;// break;
                }

        else if (choice==5){

       // case 5:

           int top[topstudent]; // Array to store indices of top 2 STUDENT,YOU CAN CHANGE IT.it start from 0

    for (int i = 0; i < NUM_STUDENTS; ++i) {
        int maxIndex = i;
        for (int j = i + 1; j < 3; ++j) {
            if (scores[j] > scores[maxIndex]) {
                maxIndex = j;
            }
        }
        // Swap scores[i] and scores[maxIndex]
        int temp = scores[i];
        scores[i] = scores[maxIndex];
        scores[maxIndex] = temp;

        // Save index of the current HIGH SCORE
        top[i] = maxIndex;
    }

    cout << "TOP STUDENTS "<<endl;
    for (int i = 0; i < NUM_STUDENTS; i++) {
    cout << "TOP: "<<i+1<<"  STUDENT ID: ";
    cout << studentIDs[top[i]];
    cout <<"  ";
    double percentage = ((double)scores[i] / (2 * NUM_QUESTIONS)) * 100; //change score of one student to 100 and desplay by loop
    cout  << " Score/100: " << percentage<< " ";
    cout <<endl;
    }
    cout <<endl;
    goto label;
}
      else if (choice == 6) {
    cout << "Exiting the program..." << endl;
    return 0; // Exit the program
}


    return 0;
}
