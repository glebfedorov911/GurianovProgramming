// #define _CRT_SECURE_NO_WARNINGS
//
// #include <iostream>
// #include <cstring>
//
// using std::cout;
// using std::endl;
// using std::strlen;
// using std::strcmp;
//
// bool solve(const char*, const char*);
//
// /*
// ‘едоров 24¬ѕ1
// ѕрисвоить переменной F значение true, если в предложении S2 есть хот€ бы одно слово предложени€ S1
// и длина которого превышает длину самого короткого слова S1, в противном случае присвоить переменной F - false
// */
//
// int main() {
//     setlocale(LC_ALL, "RUS");
//     // const char* s1{ "Hello my World" }; // 1
//     const char* s1{ "Hello World" }; // 0
//     const char* s2{ "Hello Teacher" };
//
//     bool f = solve(s1, s2);
//
//     cout << "»сходные данные:" << endl;
//     cout << "s1: ";
//     while(*s1) cout << *s1++;
//     cout << endl;
//     cout << "s2: ";
//     while(*s2) cout << *s2++;
//     cout << endl;
//
//     cout << "¬ыходные данные:" << endl;
//     cout << "F: " << f;
//
//     return 0;
// }
//
// const char* delete_spaces(const char* s) {
//     char* result = new char[strlen(s) + 1];
//     bool inWord = false;
//     int index = 0;
//
//     for (int i = 0; i < strlen(s); i++) {
//         if (s[i] != ' ') {
//             result[index++] = s[i];
//             inWord = true;
//         }
//         else if (inWord) {
//             result[index++] = ' ';
//             inWord = false;
//         }
//     }
//
//     if (index > 0 && result[index - 1] == ' ') {
//         index--;
//     }
//
//     result[index] = '\0';
//
//     return result;
// }
//
// int count_of_finding_word(const char* str, int len) {
//     if (len == 0) return 0;
//
//     int cnt = 0;
//     bool inWord = false;
//
//     for (int i = 0; i < len; i++) {
//         if (str[i] != ' ') {
//             if (!inWord) {
//                 inWord = true;
//                 cnt++;
//             }
//         }
//         else {
//             inWord = false;
//         }
//     }
//     return cnt;
// }
//
// const char** sub_words(const char* str, int cnt) {
//     const char** stringArray = new const char* [cnt];
//     const char* temp = str;
//     int index = 0;
//
//     while (*temp) {
//         while (*temp == ' ') {
//             temp++;
//         }
//         if (*temp) {
//             const char* start = temp;
//             while (*temp && *temp != ' ') {
//                 temp++;
//             }
//
//             int length = temp - start;
//
//             char* word = new char[length + 1];
//
//             for (int i = 0; i < length; i++) {
//                 word[i] = start[i];
//             }
//             word[length] = '\0';
//
//             stringArray[index++] = word;
//         }
//     }
//
//     return stringArray;
// }
//
// int smallest_word_length(const char** subStr, int len) {
//     int k = strlen(subStr[0]);
//     for (int i = 0; i < len; i++) {
//         if (subStr[i] != nullptr && subStr[i][0] != '\0') {
//             k = strlen(subStr[i]) < k ? strlen(subStr[i]) : k;
//         }
//     }
//     return k;
// }
//
// bool check_word(const char** s1, const char** s2, int sizeS1, int sizeS2, int smallest_len) {
//     for (int i = 0; i < sizeS1; i++) {
//         for (int j = 0; j < sizeS2; j++) {
//             if (strcmp(s1[i], s2[j]) == 0 && strlen(s2[j]) > smallest_len) {
//                 return true;
//             }
//         }
//     }
//     return false;
// }
//
// bool solve(const char* s1, const char* s2) {
//     s1 = delete_spaces(s1);
//     s2 = delete_spaces(s2);
//
//     int length1 = strlen(s1);
//     int length2 = strlen(s2);
//
//     int cnt1 = count_of_finding_word(s1, length1);
//     int cnt2 = count_of_finding_word(s2, length2);
//
//     const char** stringArray1 = sub_words(s1, cnt1);
//     int smallestWordS1 = smallest_word_length(stringArray1, cnt1);
//
//     const char** stringArray2 = sub_words(s2, cnt2);
//
//     return check_word(stringArray1, stringArray2, cnt1, cnt2, smallestWordS1);
// }