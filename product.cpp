#include<iostream>
#include<string>
using namespace std;

class product
{
private:
    string productName;
    int productID;
    float Price;
    int monthlySales[12];
    int totalQuantity;
    float totalBill;

public:
    void acceptDetails()
    {
        cout << "Enter productID: ";
        cin >> productID;

        cin.ignore();

        cout << "Enter productName: ";
        getline(cin, productName);

        cout << "Enter Price per unit: ";
        cin >> Price;

        cout << "Enter monthly sale for 12 months: ";

        totalQuantity = 0;

        for(int i = 0; i < 12; i++)
        {
            cin >> monthlySales[i];
            totalQuantity += monthlySales[i];
        }

        totalBill = totalQuantity * Price;
    }

    void displayDetails()
    {
        cout << "\nProduct ID: " << productID << endl;
        cout << "Product Name: " << productName << endl;
        cout << "Price: " << Price << endl;

        cout << "Total Quantity Sold: " << totalQuantity << endl;
        cout << "Total Bill: " << totalBill << endl;
    }

    float gettotalBill()
    {
        return totalBill;
    }
};

int main()
{
    int n;

    cout << "Enter number of products: ";
    cin >> n;

    product products[100];

    float grandTotal = 0;

    for(int i = 0; i < n; i++)
    {
        cout << "\n--- Product " << (i + 1) << " Details ---" << endl;

        products[i].acceptDetails();

        grandTotal += products[i].gettotalBill();
    }

    cout << "\n---- All Products Details ----" << endl;

    for(int i = 0; i < n; i++)
    {
        products[i].displayDetails();
    }

    cout << "\nGrand Total Bill: " << grandTotal << endl;

    return 0;
}

