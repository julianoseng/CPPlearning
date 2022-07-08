#include <iostream>

using namespace std;

int main() {
    cout << "Hello, welcome to Frank's Carpet Cleaning Service." << endl;
    
    cout << "\nHow many small rooms? :";
    int small_room_amount {0};
    cin >> small_room_amount;
    
    cout << "\nHow many large rooms? :";
    int large_room_amount {0};
    cin >> large_room_amount;
    
    const double small_room_price {25.0}; //dollars
    const double large_room_price {35.0}; //dollars
    const double sales_tax {0.06}; //percent
    const int days_till_estimate_expiration {30}; //days
    
    cout << "\nEstimate for carpet cleaning service" << endl;
    
    cout << "Number of small rooms: " << small_room_amount << endl;
    cout << "Number of big rooms: " << large_room_amount << endl;
    
    cout << "Price per small room: $" << small_room_price << endl;
    cout << "Price per large room: $" << large_room_price << endl;
    
    cout << "Small room cost: $" << small_room_price * small_room_amount << endl;
    cout << "Large room cost: $" << large_room_price * large_room_amount << endl;
    
    cout << "Tax: $" 
    << ((small_room_price * small_room_amount) +
       (large_room_price * large_room_amount)) * sales_tax 
    << endl;
    
    cout << "==================================================" << endl;
    
    cout << "Total estimate: $" 
    << ((small_room_price * small_room_amount) +
        (large_room_price * large_room_amount)) + (((small_room_price * small_room_amount) +
        (large_room_price * large_room_amount)) * sales_tax) 
        << endl;
        
    cout << "This estimate is valid for " << days_till_estimate_expiration << " days." << endl;
    return 0;
}
