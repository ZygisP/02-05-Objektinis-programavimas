#include <iostream>
#include <string>

using namespace std;

void print_name(string name, int n, string Lines[]);

const int N = 5;

int main(){

    string Lines[N];

    string name_input;

    getline(cin, name_input);

    print_name(name_input, name_input.size(), Lines);

    for (int i = 0; i < N; i++) {
        cout << Lines[i] << endl;
    }

    return 0;
}

void print_name(string name, int n, string Lines[]) {
    int line_len = n + 14;
    string name_str = "* Sveikas, " + name + "! *";
    for (int j = 0; j < 5; j++){
        if (j == 0 || j == 4) {
            for (int i = 0; i < name_str.size(); i++){
                cout << "*";
                Lines[j] += "*";
            }
        }
        else if (j == 1 || j == 3) {
            for (int i = 0; i < name_str.size(); i++)
                if (i == 0 || i == name_str.size() - 1){
                    cout << "*";
                    Lines[j] += "*";
                }
                else {
                    cout << " ";
                    Lines[j] += " ";
                }
        }
        else if (j == 2) {
            cout << name_str;
            Lines[j] = name_str;
        }
        cout << endl;
    }

}