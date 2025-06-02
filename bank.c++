#include <iostream>
using namespace std;

class bank {
private:
    string name;
    int bank_no, balance;

public:
    void setvalue(string n, int b_no, int b) {
        name = n;
        bank_no = b_no;
        balance = b;
    }

    void deposit(int amount) {
        balance += amount;
    }

    void withdraw(int bal) {
        if (bal <= balance) {
            balance -= bal;
            cout << "Withdrawn amount: " << bal << endl;
        } else {
            cout << "Insufficient balance for withdrawal!" << endl;
        }
    }

    void display() {
        cout << "Name: " << name << ", Balance: " << balance << endl;
    }

    bank operator+(bank &obj) {
        bank b1;
        b1.name = name + " & " + obj.name;  
        b1.bank_no = 0; 
        b1.balance = balance + obj.balance;
        return b1;
    }

    bank operator-(bank &obj) {
        bank b1;
        b1.name = name + " &" + obj.name;
        b1.bank_no = 0;
        b1.balance = balance - obj.balance;
        return b1;
    }
};

int main() {
    bank b1, b2, b3;
    b1.setvalue("Faisal", 31105, 30);
    b2.setvalue("Asad", 2342, 70);

    b3 = b1 + b2;
    b3.display();

    b3 = b2 - b1;
    b3.display();

    return 0;
}
