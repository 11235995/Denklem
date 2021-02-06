#include <iostream>
#include <math.h>

using namespace std;

float bdenklem();
void idenklem();

int main() {
    float a, b, c, derece, sonuc, del, kokdel, x1, x2 ;

    cout << "cozmek istediginiz denklemin decesini girniz "<< endl;
    cout << "1. derece ise 1'e "<< endl;
    cout << "2. dereceise 2'e basin" << endl;
    cout << "programdan cikmak icin \"-1\" giriniz" << endl;
    cin >> derece;
    while (derece != -1){

        if (derece == 1) {
            sonuc = bdenklem();
            cout << "x = " << sonuc << endl;
        }
        else if (derece == 2) {
            idenklem();
        }
        else {
            cout << "yanlis derece girdiniz " << endl;
        }
        cout << "denklemin dercesini girniz veya programdan cikmak icin \"-1\" giriniz" << endl;
        cin >> derece;

    }
    return 0;
}

float bdenklem()
{
    float a, b, x;
    cout << "1. dereceden denklem \"Ax + B = 0\" " << endl;
    cout << " A = " ;
    cin >> a;
    cout << "B = ";
    cin >> b;
    x = -b / a;

    return x;
}

void idenklem()
{
    float a, b, c, del, kokdel, x1, x2 ;

    cout << "ikinci dereceden denklem \"Ax^2 + Bx + C = 0 "<< endl;
    cout << " A = " ;
    cin >> a;
    cout << "B = ";
    cin >> b;
    cout << "C = ";
    cin >> c;

    del = pow(b,2) - 4 * a * c;
    if (0 <= del){
        kokdel = sqrt(del);
        if (0 < kokdel){
            x1 = (kokdel - b) / (2 * a);
            x2 = (- kokdel - b) / (2 * a);
            cout << "\nx1 = " << x1 << "\nx2 = " << x2 << endl;
        }
        else {
            x2 = (- kokdel - b) / (2 * a);
            cout << "\nx1 = x2 = " << x2 << endl;
        }

    }
    else {
        cout << "denkleminizin reel sayilarda cozumu yoktur --" << endl;
    }

}