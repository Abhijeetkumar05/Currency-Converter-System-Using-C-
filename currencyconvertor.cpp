#include <bits/stdc++.h>
using namespace std;
class A{
    public:
    int num;
    void select_country(){
        cout << "Select your Currency from below list " << endl << endl;
        cout << "1 for Indian Rupee " << endl;
        cout << "2 for British Pound " << endl;
        cout << "3 for Russian Ruble " << endl;
        cout << "4 for Japanese Yen " << endl;
        cout << "5 for Chinese Yuan " << endl;
        cout << "6 for Canadian Dollar " << endl;
        cout << "7 for Thai Baht " << endl;
        cout << "8 for Euro " << endl;
        cout << "9 for UAE Dirham " << endl;
        cout << "10 for Malaysian Ringgit " << endl << endl;
        cout << "Enter number here : ";
        cin >> num;
    }
};
class B : public A{
    private:
    float money,res;
    public:	
    void convert(){
        cout << "Enter how much US money you have :  ";
        cin >> money;
        select_country();
        if (num == 1){
            res = money * 83.66; // Indian Rupee is 83.66 for every US dollar.
            cout << money << "$ in US is " << res << " in Indian Rupee";
        }	
        if (num == 2){
            res = money * 0.8; // British pound is 0.8 for every US dollar.
            cout << money << "$ in US is " << res << " in British pounds";
        }
        if (num == 3){
            res = money * 94.15; // Russian Ruble is 94.15 for every US dollar.
            cout << money << "$ in US is " << res << " in Russian Ruble. ";
        }
        if (num == 4){
            res = money * 154.67; // Japansese Yen is 154.67 for every US dollar.
            cout << money << "$ in US is " << res << " in Japanese Yen. ";
        }
        if (num == 5){
            res = money * 7.24; // Chinese Yuan is 7.24 for every US dollar.
            cout << money << "$ in US is " << res << " in Chinese Yuan. ";
        }
        if (num == 6){
            res = money * 1.38; // Canadian Dollar is 1.38 for every US dollar.
            cout << money << "$ in US is " << res << " in Canadian Dollar. ";
        }
        if (num == 7){
            res = money * 36.8; // Thai Baht is 36.8 for every US dollar.
            cout << money << "$ in US is " << res << " in Thai Baht. ";
        }
        if (num == 8){
            res = money * 0.94; // Euro is 0.94 for every US dollar.
            cout << money << "$ in US is " << res << " in Euro. ";
        }
        if (num == 9){
            res = money * 3.67; // UAE Dirham is 3.67 for every US dollar.
            cout << money << "$ in US is " << res << " in UAE Dirham. ";
        }
        if (num == 10){
            res = money * 4.79; // Malaysian Ringgit is 4.79 for every US dollar.
            cout << money << "$ in US is " << res << " in Malaysian Ringgit. ";
        }
        if (num>10)    cout << "Please enter a number that is listed above! ";
    }	
};
int main(){
    B obj;
    obj.convert();
    return 0;}
