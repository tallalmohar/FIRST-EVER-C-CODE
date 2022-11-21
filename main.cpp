#include <iostream>

using namespace std;

int main() {
    
    int small_room_price = 25;
    int large_room_price = 35;
    double sales_tax = 0.06;
    
    
    
    cout <<"Tallal's Carpet Cleaning Service"<<endl;
    
    cout << " \n";
    
    cout << "Estimate for carpet cleaning service \n";
    cout << "Number of small rooms: ";
    int small_room = 0;
    cin >> small_room;
    cout << "Number of large rooms: ";
    int large_room = 0;
    cin >> large_room;
    cout << "Charges: \n";
    cout << "   $"<< small_room_price <<" per small room" << endl;
    cout << "   $"<< large_room_price <<" per large room" << endl;
    cout << "Sales tax rate is % " << sales_tax*100 << endl;
    int total_cost = (small_room * small_room_price) + (large_room * large_room_price);
    cout << "Cost: $" << total_cost << endl;
    cout << "Tax: $" << total_cost*sales_tax << endl;
    
    cout << "==============================" << endl;
    
    cout << "Total estimate: $" << total_cost+(total_cost*sales_tax) << endl;
    
    
    
    
    
    
    
    
    
}