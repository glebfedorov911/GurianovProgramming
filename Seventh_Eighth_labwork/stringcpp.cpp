#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

/*
Федоров 24ВП1
Присвоить переменной F значение true, если в предложении S2 есть хотя бы одно слово предложения S1
и длина которого превышает длину самого короткого слова S1, в противном случае присвоить переменной F - false
*/

bool findS1InS2(string, string);

int main()
{
    setlocale(LC_ALL, "RUS");

    string s1 { "hello my world"}; // 1
//    string s1 { "hello teacher"}; // 0
    string s2 {"hello world"};
    cout << "Исходные данные: " << endl << s1 << endl << s2 << endl;
    bool f = findS1InS2(s1, s2);
    cout << "Результат: ";
    cout << f << endl;
    return 0;
}

int getSmallestWordLength(string s) {
    int start = 0;
    int end = s.find(" ");
    int len = end - start;
    while (end != string::npos) {
        s = s.substr(end+1, s.length());
        end = s.find(" ");
        if (start == end) continue;
        if (end > -1) len = len > end ? end : len;
        else len = len > s.length() ? s.length() : len;
    }
    return len;
}

bool findS1InS2(string s1, string s2) {
    int smallestLenS1 = getSmallestWordLength(s1);
    int start1 = 0, start2 = 0;
    string copy_s2 = s2;
    int end1 = s1.find(" "), end2 = copy_s2.find(" ");
    string word1 = s1.substr(start1, end1), word2 = copy_s2.substr(start2, end2);
    int count_finish1 = 0, count_finish2 = 0;

    s1.erase(start1, end1+1);

    while (count_finish1 < 2) {
        copy_s2.erase(start2, end2+1);
        if (word1 == " ") continue;

        while (count_finish2 < 2) {
            if (word2 == " ") continue;
            if (word1 == word2 && word2.length() > smallestLenS1) return true;
            end2 = copy_s2.find(" ");
            if (end2 == string::npos) {
                word2 = copy_s2.substr(start2, copy_s2.length());
                count_finish2++;
            } else {
                word2 = copy_s2.substr(start2, end2);
                copy_s2.erase(start2, end2+1);
            }
        }

        end1 = s1.find(" ");
        if (end1 == string::npos) {
            word1 = s1.substr(start1, s1.length());
            count_finish1++;
        } else {
            word1 = s1.substr(start1, end1);
            s1.erase(start1, end1+1);
        }
        count_finish2 = 0;
        copy_s2 = s2;
    }
    return false;
}