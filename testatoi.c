#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int my_atoi(const char *str); // Suponiendo que esta es tu función

void test_my_atoi() {
    struct {
        const char *input;
        int expected;
    } tests[] = {
        {"123", 123},
        {"-456", -456},
        {"0", 0},
        {"+789", 789},
        {"   42", 42},
        {"   -42", -42},
        {"\t\n  58", 58},
        {"123abc", 123},
        {"abc123", 0},
        {"  +  99", 0},
        {"2147483647", 2147483647},
        {"-2147483648", -2147483648},
        {"2147483648", 0},
        {"", 0},
        {"    ", 0},
        {"123.45", 123},
        {"$100", 0},
    };

    for (size_t i = 0; i < sizeof(tests) / sizeof(tests[0]); ++i) {
        int result = my_atoi(tests[i].input);
        if (result == tests[i].expected) {
            printf("Test %zu passed: my_atoi(\"%s\") = %d\n", i + 1, tests[i].input, result);
        } else {
            printf("Test %zu failed: my_atoi(\"%s\") = %d, expected %d\n", i + 1, tests[i].input, result, tests[i].expected);
        }
    }
}

int main() {
    test_my_atoi();
    return 0;
}

