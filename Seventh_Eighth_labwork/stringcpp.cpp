// #include <iostream>
//
// using std::cout;
// using std::endl;
// using std::string;
//
// bool solve(string s1, string s2);
//
// /*
// ‘едоров 24¬ѕ1
// ѕрисвоить переменной F значение true, если в предложении S2 есть хот€ бы одно слово предложени€ S1
// и длина которого превышает длину самого короткого слова S1, в противном случае присвоить переменной F - false
// */
//
// int main()
// {
//     setlocale(LC_ALL, "RUS");
//     // string s1{ "Hello world" };   // 0
//     string s1{ "Hello my World" };   // 1
//     string s2{ "Hello Teacher" };
//
//     bool f = solve(s1, s2);
//
//     cout << "»сходные данные:" << endl;
//     cout << "s1: " << s1 << endl;
//     cout << "s2: " << s2 << endl;
//
//     cout << "¬ыходные данные:" << endl;
//     cout << "F: " << f;
//
//     return 0;
// }
//
// string delete_spaces(string s)
// {
//     string result;
//     bool inWord = false;
//
//     for (int i = 0; i < s.size(); i++)
//     {
//         if (s[i] != ' ')
//         {
//             result += s[i];
//             inWord = true;
//         }
//         else if (inWord)
//         {
//             result += ' ';
//             inWord = false;
//         }
//     }
//
//     if (!result.empty() && result.back() == ' ') result.pop_back();
//
//     return result;
// }
//
// int count_of_finding_word(string& str, int len)
// {
//     if (len == 0) return 0;
//
//     int cnt = 0;
//     bool inWord = false;
//
//     for (int i = 0; i < len; i++)
//     {
//         if (str[i] != ' ')
//         {
//             if (!inWord)
//             {
//                 inWord = true;
//                 cnt++;
//             }
//         }
//         else inWord = false;
//     }
//     return cnt;
// }
//
// string* sub_words(string& str, int cnt)
// {
//     string* stringArray = new string[cnt];
//     string tempStr;
//     char delimiter = ' ';
//
//     for (int i = 0; i < cnt; i++)
//     {
//         tempStr = str.substr(0, str.find(delimiter));
//         if (!tempStr.empty()) stringArray[i] = tempStr;
//         else stringArray[i] = str;
//         str = str.substr(str.find(delimiter) + 1);
//     }
//
//     return stringArray;
// }
//
// int smallest_word_length(string* subStr, int len)
// {
//     int k = subStr[0].size();
//     for (int i = 1; i < len; i++)
//     {
//         if (!subStr[i].empty() && subStr[i] != " ") {
//             k = subStr[i].size() < k ? subStr[i].size() : k;
//         }
//     }
//     return k;
// }
//
// bool check_word(string* s1, string* s2, int sizeS1, int sizeS2, int smallest_len)
// {
//     for (int i = 0; i < sizeS1; i++)
//     {
//         for (int j = 0; j < sizeS2; j++)
//         {
//             if (s1[i] == s2[j] && s2[j].size() > smallest_len)
//             {
//                 return true;
//             }
//         }
//
//     }
//     return false;
// }
//
// bool solve(string s1, string s2)
// {
//     s1 = delete_spaces(s1);
//     s2 = delete_spaces(s2);
//     int length1 = s1.size();
//     int length2 = s2.size();
//     int cnt1 = count_of_finding_word(s1, length1);
//     int cnt2 = count_of_finding_word(s2, length2);
//
//     string* stringArray1 = sub_words(s1, cnt1);
//     int smallestWordS1 = smallest_word_length(stringArray1, cnt1);
//
//     string* stringArray2 = sub_words(s2, cnt2);
//
//     return check_word(stringArray1, stringArray2, cnt1, cnt2, smallestWordS1);
// }