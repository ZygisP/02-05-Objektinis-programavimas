#include <iostream>
#include <string>

using namespace std;

void print_name(string name, int n, int gender_id, int line_len);

const int N = 5;

int main(){

    string name_input, gender_input;

    int line_len_input;

    cout << "Nurodykite savo varda: " << endl;

    getline(cin, name_input);

    cout << "Nurodykite savo lyti: " << endl;

    getline(cin, gender_input);

    cout << "Nurodykite remelio ploti: " << endl;

    cin >> line_len_input;

    if (line_len_input < name_input.size() + 14)
        line_len_input = name_input.size() + 14;

    cout << line_len_input << endl;

    if (gender_input == "Moteris" || gender_input == "moteris") {
        print_name(name_input, name_input.size(), 0, line_len_input);
    } else {
        print_name(name_input, name_input.size(), 1, line_len_input);
    }

    return 0;
}

void print_name(string name, int n, int gender_id, int line_len) {
    string name_str;
    if (gender_id == 0) {
        name_str = "Sveika, " + name + "!";
    } else {
        name_str = "Sveikas, " + name + "!";
    }
    for (int j = 0; j < 5; j++){
        if (j == 0 || j == 4) {
            for (int i = 0; i < line_len; i++){
                cout << "*";
            }
        }
        else if (j == 1 || j == 3) {
            for (int i = 0; i < line_len; i++)
                if (i == 0 || i == line_len - 1){
                    cout << "*";
                }
                else {
                    cout << " ";
                }
        }
        else if (j == 2) {
            for (int i = 0; i < (line_len - name_str.size()) / 2; i++) {
                if (i == 0)
                    cout << "*";
                else
                    cout << " ";
            }
            cout << name_str;
            if (name_str.size() % 2 == 0){
                if (line_len % 2 == 0){
                    for (int i = 0; i < (line_len - name_str.size()) / 2 - 1; i++) {
                        cout << " ";
                    }
                } else {
                    for (int i = 0; i < (line_len - name_str.size()) / 2; i++) {
                        cout << " ";
                    }
                }
            } else {
                if (line_len % 2 == 0){
                    for (int i = 0; i < (line_len - name_str.size()) / 2; i++) {
                        cout << " ";
                    }
                } else {
                    for (int i = 0; i < (line_len - name_str.size()) / 2 - 1; i++) {
                        cout << " ";
                    }
                }
            }

            cout << "*";
        }
        cout << endl;
    }
}
