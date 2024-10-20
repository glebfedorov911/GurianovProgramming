// #include <iostream>
// #include <algorithm>
//
// // Федоров Глеб ФВТ 24ВП1 Лаба 3
// // Даны массивы А, В, состоящие из N элементов каждый.
// // Присвоить переменной F значение true, если 30%
// // элементов массива А встречается в массиве В,
// // и false в противном случае.
//
// using std::cout;
// using std::endl;
// using std::count_if;
// using std::find;
//
// template <typename T> bool checkPercent(T* A, T* B, int N);
//
// int main()
// {
//     int N = 10;
//     // double A[N] = {0, 0, 0, 0, 0, 1.1, 2.2, 0, 0, 0};
//     double A[N] = {0, 0, 0, 0, 3.3, 1.1, 2.2, 0, 0, 0};
//     double B[N] = {1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8, 9.9, 10.1};
//
//     // int A[N] = {0, 0, 0, 0, 0, 1, 2, 0, 0, 0};
//     // int A[N] = {0, 0, 0, 0, 0, 1, 2, 9, 10, 0};
//     // int B[N] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//
//     bool F = checkPercent(A, B, N);
//
//     cout << "F: " << F;
// }
//
// template <typename T> bool checkPercent(T* A, T* B, int N) {
//     int k = count_if(A, A+N, [&B, N](T num) {
//         return find(B, B+N, num) != (B+N);
//     });
//     int percent = double(k) / double(N) * 100;
//     return percent >= 30;
// }