#include <iostream>
#include <stdexcept>
using namespace std;

int main()
{

    int n, m;
    while (cin >> n >> m){
        try {
            if (m == 0) {
                throw invalid_argument("The second number can't be 0.");
            }
            cout << "n/m = " << n/m << " + " << n%m ;
        }
        catch (invalid_argument err) {
            cout << err.what() << "\nTry again? (y/n)" << endl;
            char input;
            cin >> input;
            if (!cin || input == 'n')
                break;
        }
    }
}
