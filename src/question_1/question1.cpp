#include "question1.h"

bool test_config()
{
    return true;
}

using std::cout; using std::cin;

std::string get_factorial_sequence(unsigned int n)
{
    std::string result;
    unsigned long long factorial = 1;

    while(n > 1)
    {
        result += std::to_string(n) + 'x';
        factorial *= n--;
    }

    return result + std::to_string(n) + "=" + std::to_string (factorial);
}

void display_menu()
{
    cout<<"\n\n1-Factorial\n";
    cout<<"2-Exit\n";
}
void run_menu()
{
    auto option = 0;
    auto choice = 'n';
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
    auto factorial = 0;
    if(option == 1)
    {
        cout<<"Enter a number: ";
        cin>>factorial;
        cout<<"Factorial: "<< get_factorial_sequence(factorial);
    }

    else if(option == 2)
    {
        cout<<"Chose exit\n";
    }
    else
    {
        cout<<"Invalid option\n";
    }
}