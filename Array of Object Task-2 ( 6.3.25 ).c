#include <iostream>
#include <string>
using namespace std;

class Product {
private:
    int productNo;  // প্রোডাক্ট নম্বর
    string name;    // প্রোডাক্টের নাম
    double price;   // প্রতি প্রোডাক্টের মূল্য

public:
    // প্যারামিটারাইজড কনস্ট্রাক্টর
    Product(int no, string n, double p) : productNo(no), name(n), price(p) {}

    // প্রোডাক্টের তথ্য প্রদর্শনের মেথড
    void displayInfo() const {
        cout << "Product No: " << productNo << ", Name: " << name << ", Price: " << price << endl;
    }

    // প্রাইস রিটার্ন করার মেথড
    double getPrice() const {
        return price;
    }
};

int main() {
    // 20টি প্রোডাক্টের অ্যারে তৈরি এবং ইনিশিয়ালাইজেশন
    Product products[20] = {
        Product(1, "Laptop", 55000),
        Product(2, "Smartphone", 25000),
        Product(3, "Tablet", 30000),
        Product(4, "Headphones", 1500),
        Product(5, "Keyboard", 1200),
        Product(6, "Mouse", 800),
        Product(7, "Monitor", 10000),
        Product(8, "Printer", 7000),
        Product(9, "Camera", 20000),
        Product(10, "Speaker", 2500),
        Product(11, "Charger", 500),
        Product(12, "Power Bank", 1200),
        Product(13, "USB Cable", 200),
        Product(14, "External HDD", 4000),
        Product(15, "Router", 3000),
        Product(16, "Earphones", 600),
        Product(17, "Smartwatch", 8000),
        Product(18, "Pen Drive", 400),
        Product(19, "Bluetooth Dongle", 300),
        Product(20, "Mic", 1500)
    };

    double budget;
    cout << "Enter your budget: ";
    cin >> budget;

    cout << "Products within your budget:" << endl;
    int count = 0; // কাউন্টার ব্যবহার করা হয়েছে

    // বাজেটের মধ্যে থাকা প্রোডাক্টগুলো খুঁজে বের করা
    for (int i = 0; i < 20; ++i) {
        if (products[i].getPrice() <= budget) {
            products[i].displayInfo();
            count=1; // কাউন্টার ইনক্রিমেন্ট
        }
    }

    // যদি কোনো প্রোডাক্ট না পাওয়া যায়
   else if (count == 0) {
        cout << "No products found within your budget." << endl;
    }

    return 0;
}
