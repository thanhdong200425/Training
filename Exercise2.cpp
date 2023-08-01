#include "iostream"
#include "string"
#include "cstring"

using namespace std;

string inputString();

string findChar(string model);


int main() {
    string string1 = inputString();
    string result = findChar(string1);
    cout << result << " " << result.length();
}

string inputString() {
    string arr;
    getline(cin, arr);
    return arr;
}

string findChar(string model) {
    if (model.length() == 0) {
        exit(0);
    } else {

        string result = "";
        int length = model.length();
        for (int i = 0; i < length; i++) {
            bool noRepeat = true;
            for (int j = 0; j < length; j++) {
                if (model[i] == model[j] && i != j) {
                    noRepeat = false;
                    break;
                }
            }
            if (noRepeat) {
                result += model[i];
            }
        }
        return result;
    }
}


