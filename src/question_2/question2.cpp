#include "question2.h"


using std::string; using std::cout; using std::cin;

bool test_config()
{
    return true;
}

string gpa_to_letter_grade(double gpa)
{
   string letter_grade;
      if(gpa >= 3.50 && gpa <= 4)
	{
	  letter_grade = "A";
	}
      else if(gpa >= 3 && gpa <= 3.49)
	{
	  letter_grade = "B";
	}
      else if(gpa >= 2 && gpa <= 2.99)
	{
	  letter_grade = "C";
	}
      else if(gpa >= 1 && gpa <= 1.99)
	{
	  letter_grade = "D";
	}
      else if(gpa >= 0 && gpa <= .99)
	{
	  letter_grade = "F";
	}
      else
	{
	  letter_grade = "Invalid GPA";
	}
      return letter_grade;
}

void display_menu()
{
    cout<<"1-Enter GPA\n";
    cout<<"2-Exit\n";
}

void run_menu()
{
    auto choice=0;
    string letter_grade;
    display_menu();
    cout<<"Enter choice: ";
    cin>>choice;

    if(choice >1)
    {
     cout<<"Have a nice day!\n";
     return;
    }
    
    handle_menu_option(choice);
}

void handle_menu_option(int choice)
{
    auto gpa=0;
    string letter_grade;
    cout<<"Enter gpa of 1 - 4 :";
    cin>>gpa;

    if(choice ==1)
    {
     letter_grade = gpa_to_letter_grade(gpa);
    }

        
    cout<<"Your Letter Grade is: "<<letter_grade<<"\n";
}