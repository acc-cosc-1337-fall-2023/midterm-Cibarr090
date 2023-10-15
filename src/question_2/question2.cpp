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
    auto option = 0;
    auto choice= 'n';
    string letter_grade;

    do
    {
        display_menu();
        cout<<"Enter menu option: ";
        cin>>option;  
        handle_menu_option(option);

    if(option == 2)
      {
        cout<<"Exit y or n?";
        cin>>choice;
      } 
    if(choice == 'n' || choice == 'N')
      {
        option = 0;
      }
      

    } while (option != 2);
}

void handle_menu_option(int option)
{
    double gpa =0;
    string letter_grade;
     
    if(option ==1)
    {
     cout<<"Enter gpa of 1 - 4 :";
     cin>>gpa;     
     cout<<"your letter grade is: "<<gpa_to_letter_grade(gpa)<<letter_grade<<"\n";
    }

    else if(option == 2)
    {
      cout<<"Chose Exit\n";
    }

    else
    {
      cout<<"Invalid option\n";
    }
        
    
}