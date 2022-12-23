#include "User.h"
#include "RoleAndPermission.h"
void User::displayMainMenu()
{
    cout << "\n\t\t(a) Press 0 to Exit." << endl;
    cout << "\t\t(b) Press 1 to Login as admin." << endl;
    cout << "\t\t(c) Press 2 to Register as admin." << endl;
    cout << "\t\t(d) Press 3 to Login as Passenger." << endl;
    cout << "\t\t(e) Press 4 to Register as Passenger." << endl;
    cout << "\t\tEnter the desired option:    ";
}

void User::mainProgram()
{
    int countNumOfUsers = 2;
    DisplayArtwork display;
    RoleAndPermission role;
    Flight flightList;
    Customer customerList;
    FlightReservation bookingAndReserving;
    flightList.flightScheduler();
    display.welcomeScreen(1);
    printf("\n\n\t\t\t\t\t\t\t\t\t+++++++++++++ Welcome to TeamS AirLines +++++++++++++\n\nTo Further Proceed, Please enter a value.\n");
    printf("\n***** Default Username && Password is root-root ***** \nUsing Default Credentials will restrict you to just view the list of Passengers....\n\n");
    displayMainMenu();
    int desiredOption; cin >> desiredOption;
    while (desiredOption < 0 || desiredOption > 4)
    {
        printf("\t\tERROR!!Please enter value between 0 - 4. Enter the value again : \t");
        cin >> desiredOption;
    }
    do
    {
        role.adminUserNameAndPassword[0][0] = "root";
        role.adminUserNameAndPassword[0][1] = "root";
        role.adminUserNameAndPassword[1][0] = "admin";
        role.adminUserNameAndPassword[1][1] = "admin";
        if (desiredOption == 1)
        {
            system("CLS");
            display.userScreen(1);
            cout << "\n\nEnter the UserName to login to the Management System: \t";
            string username; cin >> username;
            cout << "Enter the Password to login to the Management System: \t";
            string password; cin >> password;
            cout << endl;
            if (role.isPrivilegedUserOrNot(username, password) == -1)
            {
                printf("\n\n\t\tCannot find user with the entered credentials.... Try Creating New Credentials or get yourself register by pressing 2....\n");
                cout << "\t\tReturning...";
                Sleep(2000);
                system("CLS");
            }   
            else if (role.isPrivilegedUserOrNot(username, password) == 0)
            {
                cout <<"\n\n\t\tYou've standard/default privileges to access the data... You can just view customers data..." << "Can't perform any actions on them...." << endl;
                customerList.displayCustomersData();
            }
            else
            {
                system("CLS");
                int desiredChoice;
                printf("\n\n%-20s", " ");
                cout << "Logged in Successfully as \"" << username << "\"... For further Proceedings, enter a value from below...." << endl;
                do
                {
                    printf("\n%10s", " ");
                    cout << "\t\tLogged in as \"" << username << "\"\n";
                    cout << "\t\t(a) Enter 1 to add new Passenger...." << endl;
                    cout << "\t\t(b) Enter 2 to search a Passenger...." << endl;
                    cout << "\t\t(c) Enter 3 to update the Data of the Passenger...." << endl;
                    cout << "\t\t(d) Enter 4 to delete a Passenger...." << endl;
                    cout << "\t\t(e) Enter 5 to Display all Passengers...." << endl;
                    cout << "\t\t(f) Enter 6 to Display all flights registered by a Passenger..." << endl;
                    cout << "\t\t(g) Enter 7 to Display all Flight...." << endl;
                    cout << "\t\t(h) Enter 8 to Delete a Flight...." << endl;
                    cout << "\t\t(i) Enter 0 to Go back to the Main Menu/Logout...." << endl;
                    cout << "\t\tEnter the desired option: \t";
                    cin >> desiredChoice;
                    if (desiredChoice == 1)
                    {
                        system("CLS");
                        display.adminScreen(1);
                        customerList.addNewCustomerByAdmin();
                        cout << "\n\n\t\tAdd new customer successfully!\n\n";
                        cout << "\t\tReturning...";
                        Sleep(2000);
                        system("CLS");
                    }
                    else if (desiredChoice == 2)
                    {
                        system("CLS");
                        display.adminScreen(2);
                        customerList.displayCustomersData();
                        cout << "Enter the Customer ID to Search: \t";
                        string customerID; cin >> customerID;
                        customerList.searchUser(customerID);
                        cout << "\n\n\t\tPress any key to exit...";
                        getch();
                        cout << "\n\n\t\tReturning...";
                        Sleep(2000);
                        system("CLS");
                    }
                    else if (desiredChoice == 3)
                    {
                        system("CLS");
                        display.customerScreen(2);
                        customerList.displayCustomersData();
                        cout << "\nEnter the Customer ID to Update data: \t";
                        string customerID; cin >> customerID;
                        if (customerList.customerCollection.size() > 0)
                        {
                            customerList.editUserInfo(customerID);
                            cout << "\n\n\t\tCustomer Data has been updated!\n\n";
                            cout << "\t\tReturning...";
                            Sleep(2000);
                            system("CLS");
                        }
                        else
                        {
                            cout << "\n\n\t\tNo customer with the ID " << customerID << " found!\n" << endl;
                            cout << "\t\tReturning...";
                            Sleep(2000);
                            system("CLS");
                        }
                    }
                    else if (desiredChoice == 4)
                    {
                        system("CLS");
                        display.customerScreen(3);
                        customerList.displayCustomersData();
                        cout << "\nEnter the Customer ID to Delete: \t";
                        string customerID; cin >> customerID;
                        if (customerList.customerCollection.size() > 0)
                        {
                            customerList.deleteUser(customerID);
                        }
                        else
                        {
                            cout << "\n\n\t\tNo customer with the ID " << customerID << " found!\n" << endl;
                            cout << "\t\tReturning...";
                            Sleep(2000);
                            system("CLS");
                        }
                    }
                    else if (desiredChoice == 5)
                    {
                        system("CLS");
                        display.adminScreen(3);
                        cout << endl;
                        customerList.displayCustomersData();
                        cout << "\n\n\t\tPress any key to exit...";
                        getch();
                        cout << "\n\n\t\tReturning...";
                        Sleep(2000);
                        system("CLS");
                    }
                    else if (desiredChoice == 6)
                    {
                        system("CLS");
                        display.customerScreen(6);
                        customerList.displayCustomersData();
                        cout << "\nEnter the Customer ID to display all flight registed by that user: \t";
                        string customerID; cin >> customerID;
                        bookingAndReserving.displayFlightsRegisteredByOneUser(customerID);
                        cout << "\n\n\t\tPress any key to exit...";
                        getch();
                        cout << "\n\n\t\tReturning...";
                        Sleep(2000);
                        system("CLS");
                    }
                    else if (desiredChoice == 7)
                    {
                        system("CLS");
                        display.customerScreen(4);
                        flightList.displayFlightSchedule();
                        cout << "\n\n\t\tPress any key to exit...";
                        getch();
                        cout << "\n\n\t\tReturning...";
                        Sleep(2000);
                        system("CLS");
                    }
                    else if (desiredChoice == 8)
                    {
                        system("CLS");
                        display.adminScreen(4);
                        flightList.displayFlightSchedule();
                        cout << "\nEnter the flight number to delete: \t";
                        string flightNo; cin >> flightNo;
                        flightList.deleteFlight(flightNo);
                        cout << "\t\tReturning...";
                        Sleep(2000);
                        system("CLS");
                    }
                    else if (desiredChoice == 0)
                    {
                        cout << "\n\n\n";
                        display.customerScreen(10);
                        cout << "\n\n\t\tLogging out from \"" << username << "\"...\n\n";
                        Sleep(2000);
                        system("CLS");
                    }
                    else
                    {
                        cout << "\n\n\t\tInvalid choice! You have to login again...";
                        Sleep(2000);
                        system("CLS");
                        desiredChoice = 0;
                    }
                } while (desiredChoice != 0);
            }
        }
        else if (desiredOption == 2)
        {
            system("CLS");
            display.userScreen(2);
            cout << "\n\nEnter the username to register: \t";
            string username; cin >> username;
            cout << "Enter the password to register: \t";
            string password; cin >> password;
            while (role.isPrivilegedUserOrNot(username, password) != -1)
            {
                cout << "\n\n\t\tAdmin with same UserName already exist.\n\n";
                cout << "Enter new username: \t"; cin >> username;
                cout << "Enter password again: \t"; cin >> password;
            }
            cout << "\n\n\t\tRegisted successfully!\n\n";
            cout << "\t\tReturning...";
            Sleep(2000);
            system("CLS");
            role.adminUserNameAndPassword[countNumOfUsers][0] = username;
            role.adminUserNameAndPassword[countNumOfUsers][1] = password;
            countNumOfUsers++;
        }
        else if (desiredOption == 3)
        {
            system("CLS");
            display.userScreen(3);
            cout << "\n\nEnter the username to login: \t";
            string username; cin >> username;
            cout << "Enter password: \t";
            string password; cin >> password;
            string result = role.isPassengerRegistered(username, password);
            if (result[0] == '1')
            {
                system("CLS");
                int desiredChoice;
                string userID = result.substr(2, 5);
                printf("\n\n%-20s", " ");
                cout << "Logged in Successfully as \"" << username << "\"... For further Proceedings, enter a value from below...." << endl;
                do
                {
                    printf("\n%10s", " ");
                    cout << "\t\tLogged in as \"" << username << "\"\n";
                    cout << "\t\t(a) Enter 1 to Book a flight....\n";
                    cout << "\t\t(b) Enter 2 to update your Data....\n";
                    cout << "\t\t(c) Enter 3 to delete your account....\n";
                    cout << "\t\t(d) Enter 4 to Display Flight Schedule....\n";
                    cout << "\t\t(e) Enter 5 to Cancel a Flight....\n";
                    cout << "\t\t(f) Enter 6 to Display all flights registered by " << username << "...\n";
                    cout << "\t\t(g) Enter 0 to Go back to the Main Menu/Logout....\n";
                    cout << "\t\tEnter the desired choice: \t";
                    cin >> desiredChoice;
                    if (desiredChoice == 1)
                    {
                        system("CLS");
                        display.customerScreen(1);
                        flightList.displayFlightSchedule();
                        cout << "\nEnter the flight number to book: \t";
                        string flightNo; cin >> flightNo;
                        cout << "Enter the number of tickets for " << flightNo << " flight: \t";
                        int numOfTickets; cin >> numOfTickets;
                        while (numOfTickets > 10)
                        {
                            cout << "\n\n\t\tYou can't book more than 10 tickets at a time for single flight....\n\n";
                            cout << "Enter number of tickets again: \t";
                            cin >> numOfTickets;
                        }
                        bookingAndReserving.bookFlight(flightNo, numOfTickets, userID);
                        cout << "\t\tReturning...";
                        Sleep(2000);
                        system("CLS");
                    }
                    else if (desiredChoice == 2)
                    {
                        system("CLS");
                        display.customerScreen(2);
                        customerList.editUserInfo(userID);
                        cout << "\n\n\t\tYour Data has been updated!\n\n";
                        cout << "\t\tReturning...";
                        Sleep(2000);
                        system("CLS");
                    }
                    else if (desiredChoice == 3)
                    {
                        system("CLS");
                        display.customerScreen(3);
                        cout << "\n\nAre you sure to delete your acount? Enter \"Y/y\" to confirm: \t";
                        string confirmation; cin >> confirmation;
                        if (confirmation == "Y" || confirmation == "y")
                        {
                            customerList.deleteUser(userID);
                            desiredChoice = 0;
                        }
                        else cout << "\n\n\t\tAction has been cancelled!\n" << endl;
                        cout << "\t\tReturning...";
                        Sleep(2000);
                        system("CLS");
                    }
                    else if (desiredChoice == 4)
                    {
                        system("CLS");
                        display.customerScreen(4);
                        flightList.displayFlightSchedule();
                        cout << "\n\n\t\tPress any key to exit...";
                        getch();
                        cout << "\n\n\t\tReturning...";
                        Sleep(2000);
                        system("CLS");
                    }
                    else if (desiredChoice == 5)
                    {
                        system("CLS");
                        display.customerScreen(5);
                        bookingAndReserving.cancelFlight(userID);
                    }
                    else if (desiredChoice == 6)
                    {
                        system("CLS");
                        display.customerScreen(6);
                        bookingAndReserving.displayFlightsRegisteredByOneUser(userID);
                        cout << "\n\n\t\tPress any key to exit...";
                        getch();
                        cout << "\n\n\t\tReturing...";
                        Sleep(2000);
                        system("CLS");
                    }
                    else if (desiredChoice == 0)
                    {
                        cout << "\n\n\n";
                        display.customerScreen(10);
                        cout << "\n\n\t\tLogging out from \"" << username << "\"\...\n\n";
                        cout << "\t\tReturning...";
                        Sleep(2000);
                        system("CLS");
                    }
                    else
                    {
                        if (desiredChoice != 0)
                        {
                            cout << "\n\n\t\tInvalid Choice... You've Have to login again...";
                            cout << "\n\n\t\tReturning...";
                            Sleep(2000);
                            system("CLS");
                        }
                        desiredChoice = 0;
                    }
                } while (desiredChoice != 0);
            }
            else
            {
                cout << "\n\n\t\tCannot found the user! Try Creating New Credentials or get yourself register by pressing 4....\n\n";
                cout << "\t\tReturning...";
                Sleep(2000);
                system("CLS");
            }
        }
        else if (desiredOption == 4)
        {
            system("CLS");
            display.userScreen(4);
            customerList.addNewCustomer();
            cout << "\n\n\t\tRegisted successfully!\n\n";
            cout << "\t\tReturning...";
            Sleep(2000);
            system("CLS");
        }
        else if (desiredOption == 0)
        {
            cout << "\n\n\t\tAre you sure you want to exit? Enter \"Y/y\" to confirm: \t";
            string exit; cin >> exit;
            if (exit == "Y" || exit == "y")
            {
                cout << "\n\n\t\tThanks for using TeamS Airline System!\n\n";
                display.welcomeScreen(2);
                Sleep(3000);
                break;
            }
            else
            {
                cout << "\n\n\t\tAction has been cancelled...";
                cout << "\n\n\t\tReturning...";
                Sleep(2000);
                system("CLS");
            }
        }
        displayMainMenu();
        cin >> desiredOption;
        while (desiredOption < 0 || desiredOption > 4)
        {
            cout << "\t\tERROR!! Please enter value between 0 - 4. Enter the value again: \t";
            cin >> desiredOption;
        }
        if (desiredOption == 0)
        {
            cout << "\n\n\t\tAre you sure you want to exit? Enter \"Y/y\" to confirm: \t";
            string exit; cin >> exit;
            if (exit == "Y" || exit == "y")
            {
                cout << "\n\n\t\tThanks for using TeamS Airline System!\n\n";
                display.welcomeScreen(2);
                Sleep(3000);
                break;
            }
            else
            {
                cout << "\n\n\t\tAction has been cancelled...";
                cout << "\n\n\t\tReturning...";
                Sleep(2000);
                system("CLS");
                desiredOption = 9;
            }
        }
    } while (desiredOption != 0);
}
