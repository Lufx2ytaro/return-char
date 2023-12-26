#include <iostream>
#include <cstdarg>
using namespace std;


string get(int num_args, ...) {
    string result;
    va_list args;
    va_start(args, num_args);

    for (int i = 0; i < num_args; i++) {
        char c = va_arg(args, int);
        result += c;
    }

    va_end(args);
    return result;
}

int main()
{
    setlocale(LC_ALL, "");
    string text = get(3, 'ì', 'è', 'ð');
    cout << text;

    return 0;
}