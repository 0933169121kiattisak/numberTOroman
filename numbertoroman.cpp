
#include <iostream>
#include <string>

using namespace std;

int main() {
   int numberToroman;
    cout << "Enter number between 1 and 9 for change roman: " << endl;
    cin >> numberToroman;

    if(numberToroman < 0 || numberToroman == 0){
        cout << "Error: Please input positive number" << endl;
    }else if(numberToroman > 9){
        cout << "Error: Out of range" << endl;
    }else{
        switch(numberToroman){

            case 1:
                cout << "I";
                break;
            case 2:
                cout << "II";
                break;
            case 3:
                cout << "III";
                break;
            case 4:
                cout << "IV";
                break;
            case 5:
                cout << "V";
                break;
            case 6:
                cout << "VI";
                break;
            case 7:
                cout << "VII";
                break;
            case 8:
                cout << "VIII";
                break;
            case 9:
                cout << "IX";
                break;
        }
    }
    
    return 0;
}