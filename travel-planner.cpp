#include <iostream>
#include <string>

using namespace std;

int main()
{
    cout << "Welcome to your personal travel planner" << endl;
    cout << "Here you can manage the following: \n1. Add Destination\n2. Set Travel Mode & Costs\n3. Accommodation\n4. Add Activities\n5. View your Itinerary\netc." << endl;

    int destinationsWantToVisit;

    cout << "Enter the number of destinations you want to visit: ";
    cin >> destinationsWantToVisit;

    if (destinationsWantToVisit > 0)
    {
        string locations[] = {
            "Paris, France",
            "Kyoto, Japan",
            "New York City, USA",
            "Great Barrier Reef, Australia",
            "Dubai, UAE",
            "Machu Picchu, Peru",
            "Cape Town, South Africa",
            "Santorini, Greece",
            "Rome, Italy",
            "Istanbul, Turkey"};

        cout << "Select which destinations you want to travel to: " << endl;

        for (int i = 0; i < 10; i++)
        {
            cout << i + 1 << ". " << locations[i] << endl;
        }

        cout << "Enter the numbers of the destinations you want to add (separated by spaces): ";

        int selectedDestinations[10];
        int enteredCount = 0;

        for (int i = 0; i < destinationsWantToVisit; i++)
        {
            int destination;
            cin >> destination;

            if (destination < 1 || destination > 10)
            {
                cout << "Invalid selection: " << destination << ". Please enter a number between 1 and 10." << endl;
                i--;
            }
            else
            {
                selectedDestinations[enteredCount++] = destination;
            }
        }

        cout << "\nYou have selected the following destinations:" << endl;

        for (int i = 0; i < enteredCount; i++)
        {
            cout << locations[selectedDestinations[i] - 1] << endl;
        }

        string travelMode;

        if (enteredCount >= 1)
        {

            cout << "\nSet a single travel mode for all selected destinations (e.g., Car, Train, Flight): ";
            cin >> travelMode;

            cout << "\nTravel mode '" << travelMode << "' has been set for the following destinations:" << endl;

            for (int i = 0; i < enteredCount; i++)
            {
                cout << locations[selectedDestinations[i] - 1] << endl;
            }
        }
        else
        {
            cout << "You must select at least one destination to proceed." << endl;
        }

        long int totalCost = 0;

        cout << "Please enter your total cost/budget in Pakistan rupees (1,000,000 - 5,000,000): ";
        cin >> totalCost;

        while ((totalCost < 1000000) || (totalCost > 5000000))
        {
            cout << "Invalid input! Please enter cost/budget between (1,000,000 - 5,000,000): ";
            cin >> totalCost;
        }

        string accommodation;

        cout << "\nEnter your preferred type of accommodation (e.g., Hotel, Hostel, Airbnb, Resort): ";
        cin >> accommodation;

        cout << "\nThe accommodation '" << accommodation << "' has been chosen for the following destinations:" << endl;

        for (int i = 0; i < enteredCount; i++)
        {
            cout << locations[selectedDestinations[i] - 1] << endl;
        }

        string activities[10];

        for (int i = 0; i < enteredCount; i++)
        {
            cout << "\nEnter the main activity planned at " << locations[selectedDestinations[i] - 1]
                 << " (use '_' instead of spaces): ";
            cin >> activities[i];
        }

        cout << "\nHere is your complete itinerary:" << endl;

        cout << "\nTotal Cost/Buget: " << totalCost << endl;

        for (int i = 0; i < enteredCount; i++)
        {
            cout << "\nDestination: " << locations[selectedDestinations[i] - 1] << endl;
            cout << "Travel Mode: " << travelMode << endl;
            cout << "Accommodation: " << accommodation << endl;
            cout << "Activity: " << activities[i] << endl;
        }
    }
    else
    {
        cout << "You must enter at least one destination.";
    }

    return 0;
}
