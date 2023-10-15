#include"question4.h"

using std::cout; using std::cin;


bool test_config()
{
    return true;
}

int get_fib_sequence(int number)
{
    if(number <=1)
    {
        return number;
    }

    std::vector<int> f(number + 1);
    f[0] = 0;
    f[1] = 1;
    for (int i= 2; i<= number; i++)
    {
        f[i] = f[i - 1] + f[i -2];
    }

    return f[number];
}

void display_menu()
{
    cout<<"1-Fibonacci Number \n";
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
    auto number = 0;
    if(option == 1)
    {
        cout<<"Enter a number from 1 to 15: ";
        cin>>number;
        cout<<"Fibonacci number: "<<get_fib_sequence(number)<<"\n";
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



