//#include <iostream>
//#include <cstring>
//
//
//using std::cout;
//using std::endl;
//
///*
//Федоров 24ВП1
//Присвоить переменной F значение true, если в предложении S2 есть хотя бы одно слово предложения S1
//и длина которого превышает длину самого короткого слова S1, в противном случае присвоить переменной F - false
//*/
//
//bool findS1InS2(char*, char*);
//
//int main() {
//    setlocale(LC_ALL, "RUS");
//
//    char s1[] { "hello my world" }; // 1
////    char s1[] { "hello teacher" }; // 0
//    char s2[] { "hello world" };
//    cout << "Исходные данные: " << endl;
//    for (auto i: s1) {
//        cout << i;
//    }
//    cout << endl;
//    for (auto i: s2) {
//        cout << i;
//    }
//    cout << endl;
//
//    bool f = findS1InS2(s1, s2);
//    cout << "Результат: ";
//    cout << f << endl;
//    return 0;
//}
//
//int getSmallestLengthWord(char* s) {
//    char* context = nullptr;
//    char* s_copy = strdup(s);
//    char* word = strtok_s(s_copy, " ", &context);
//    if (!word) return 0;
//
//    int len = std::strlen(word);
//    while (word != nullptr) {
//        word = strtok_s(nullptr, " ", &context);
//        if (word) len = (std::strlen(word) < len) ? std::strlen(word) : len;
//    }
//    return len;
//}
//
//bool findS1InS2(char* s1, char* s2) {
//    int lenSmallestWordS1 = getSmallestLengthWord(s1);
//    char* context1 = nullptr;
//    char* context2 = nullptr;
//
//    char* s1_copy = strdup(s1);
//    char* s2_copy = strdup(s2);
//
//    char* word1 = strtok_s(s1_copy, " ", &context1);
//    while (word1 != nullptr) {
//        char* word2 = strtok_s(s2_copy, " ", &context2);
//        while (word2 != nullptr) {
//            if (!std::strcmp(word1, word2) && strlen(word2) > lenSmallestWordS1) return true;
//            word2 = strtok_s(nullptr, " ", &context2);
//        }
//        word1 = strtok_s(nullptr, " ", &context1);
//        s2_copy = strdup(s2);
//    }
//    return false;
//}