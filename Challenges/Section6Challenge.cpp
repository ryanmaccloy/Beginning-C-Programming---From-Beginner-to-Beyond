#include <iostream>
using namespace std;

int main() {
    cout << "Hello, welcome to Ryan's Carpet Cleaning Service" << endl;
    cout << "\nHow many small rooms would you like cleaned? ";
        int small_number_of_rooms {0};
        cin >> small_number_of_rooms;
    
    cout << "\nHow many large rooms would you like cleaned? ";
        int large_number_of_rooms {0};
        cin >> large_number_of_rooms;
    
    const double price_per_small_room {25.00};
    const double price_per_large_room {35.00};
    const double sales_tax {0.06};
    const double estimate_expiry {30}; // days
        
    cout << "\nEstimate for carpet cleaning service" << endl;
    cout << "Number of small rooms: " << small_number_of_rooms << endl;
    cout << "Number of large rooms: " << large_number_of_rooms << endl;
    cout << "Price per small room: $" << price_per_small_room << endl;
    cout << "Price per large room: $" << price_per_large_room << endl;
    cout << "Cost: $" << price_per_small_room * small_number_of_rooms + price_per_large_room * large_number_of_rooms  << endl;
    cout << "Tax: $" << (price_per_small_room * small_number_of_rooms * sales_tax) + (price_per_large_room * large_number_of_rooms * sales_tax) << endl;
    cout << "==============================" << endl;
    cout << "Total estimate: $" << price_per_small_room * small_number_of_rooms + price_per_large_room * large_number_of_rooms + (price_per_small_room * small_number_of_rooms * sales_tax) + (price_per_large_room * large_number_of_rooms * sales_tax) << endl;
    cout <<"This estimate is valid for " << estimate_expiry << " days" << endl;
    cout << endl;
    
    return 0;
}
