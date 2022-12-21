#include "User.h"
#include "RoleAndPermission.h"
void User::displayMainMenu()
{
    cout << "\t\t(a) Press 0 to Exit." << endl;
    cout << "\t\t(b) Press 1 to Login as admin." << endl;
    cout << "\t\t(c) Press 2 to Register as admin." << endl;
    cout << "\t\t(d) Press 3 to Login as Passenger." << endl;
    cout << "\t\t(e) Press 4 to Register as Passenger." << endl;
    cout << "\t\tEnter the desired option:    ";
}

void User::mainProgram()
{
    int countNumOfUsers = 1;
    RoleAndPermission role;
    Flight flightList;
    Customer customerList;
    FlightReservation bookingAndReserving;
    flightList.flightScheduler();

    printf("\n\t\t\t\t\t+++++++++++++ Welcome to TeamS AirLines +++++++++++++\n\nTo Further Proceed, Please enter a value.\n");
    printf("\n***** Default Username && Password is root-root ***** \nUsing Default Credentials will restrict you to just view the list of Passengers....\n\n");
    displayMainMenu();
    int desiredOption; cin >> desiredOption;
    while (desiredOption < 0 || desiredOption>8)
    {
        printf("ERROR!! Please enter value between 0 - 4. Enter the value again :\t");
        cin >> desiredOption;
    }
    do
    {
        if (desiredOption == 1)
        {
            role.adminUserNameAndPassword[0][0] = "root";
            role.adminUserNameAndPassword[0][1] = "root";
            role.adminUserNameAndPassword[1][0] = "admin";
            role.adminUserNameAndPassword[1][1] = "admin";
            cout << "\n\nEnter the UserName to login to the Management System: \t";
            string username; cin >> username;
            cout << "Enter the Password to login to the Management System: \t";
            string password; cin >> password;
            cout << endl;
            if (role.isPrivilegedUserOrNot(username, password) == -1)
                printf("\n%20sERROR!!! Unable to login Cannot find user with the entered credentials.... Try Creating New Credentials or get yourself register by pressing 4....\n", "");
            else if (role.isPrivilegedUserOrNot(username, password) == 0)
            {
                cout <<"You've standard/default privileges to access the data... You can just view customers data..." << "Can't perform any actions on them...." << endl;
                customerList.displayCustomersData();
            }
            else
            {
                printf("%-20s", " ");
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
                    cout << "\t\t(g) Enter 7 to Delete a Flight...." << endl;
                    cout << "\t\t(h) Enter 0 to Go back to the Main Menu/Logout...." << endl;
                    cout << "\t\tEnter the desired option: \t";
                    cin >> desiredOption;
                    if (desiredOption == 1) customerList.addNewCustomer();
                    else if (desiredOption == 2)
                    {
                        customerList.displayCustomersData();
                        cout << "\t\tEnter the Customer ID to Search: \t";
                        string customerID; cin >> customerID;
                        customerList.searchUser(customerID);
                    }
                    else if (desiredOption == 3)
                    {
                        customerList.displayCustomersData();
                        cout << "\t\tEnter the Customer ID to Update data: \t";
                        string customerID; cin >> customerID;
                        if (customerList.customerCollection.size() > 0)
                        {
                            customerList.editUserInfo(customerID);
                        }
                        else cout << "\t\tNo customer with the ID " << customerID << " found!\n" << endl;
                    }
                    else if (desiredOption == 4)
                    {
                        customerList.displayCustomersData();
                        cout << "\t\tEnter the Customer ID to Delete: \t";
                        string customerID; cin >> customerID;
                        if (customerList.customerCollection.size() > 0)
                        {
                            customerList.deleteUser(customerID);
                        }
                        else cout << "\t\tNo customer with the ID " << customerID << " found!\n" << endl;
                    }
                    else if (desiredOption == 5)
                    {
                        cout << endl;
                        customerList.displayCustomersData();
                    }
                    else if (desiredOption == 6)
                    {
                        customerList.displayCustomersData();
                        cout << "\t\tEnter the Customer ID to display all flight registed by that user: \t";
                        string customerID; cin >> customerID;
                        bookingAndReserving.displayFlightsRegisteredByOneUser(customerID);
                    }
                    else if (desiredOption == 7)
                    {
                        flightList.displayFlightSchedule();
                        cout << "\t\tEnter the flight number to delete: \t";
                        string flightNo; cin >> flightNo;
                        flightList.deleteFlight(flightNo);
                    }
                    else if (desiredOption == 0)
                    {
                        cout << "\t\tThanks for using TeamS Airline System!";
                    }
                    else
                    {
                        cout << "\t\tInvalid choice! You have to login again...";
                        desiredOption = 0;
                    }
                } while (desiredOption != 0);
            }
        }
    } while (desiredOption != 0);
}
