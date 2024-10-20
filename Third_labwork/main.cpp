// #include <iostream>
//
// using namespace std;
//
// // Федоров Глеб ФВТ 24ВП1 Лаба 3
// // Даны массивы А, В, состоящие из N элементов каждый.
// // Присвоить переменной F значение true, если 30%
// // элементов массива А встречается в массиве В,
// // и false в противном случае.
//
// bool is_persent_good(int A[], int B[], int size) {
//     int k = 0;
//     for (int i = 0; i < size; i++) {
//         for (int j = 0; j < size; j++) {
//             if (A[i] == B[j]) {
//                 k++;
//                 break;
//             }
//         }
//         int percent_same = ((double) k/(double) size) * 100;
//         if (percent_same >= 30) return true;
//     }
//     return false;
// }
//
// int main() {
//     setlocale(LC_ALL, "RUS");
//     const int N = 10;
//     int A[N] {1, 2, 0, 0, 0, 0, 0, 0, 0, 0};
//     int B[N] {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//
//     cout << "Исходные данные" << endl;
//     cout << "A:" << endl;
//     for (auto i : A) {
//         cout << i << " ";
//     }
//     cout << endl;
//
//     int min = 100000000, imin;
//     for (int i = 0; i < N; i++) {
//         if (A[i] < min) {
//             min = A[i];
//             imin = i;
//         }
//     }
//     cout << "min: " << min << " imin: " << imin << endl;
//
//     int max = -100000000, imax;
//     for (int i = 0; i < N; i++) {
//         if (A[i] > max) {
//             max = A[i];
//             imax = i;
//         }
//     }
//     cout << "max: " << max << " imax: " << imax << endl;
//
//     int sum = 0;
//     for (int i : A) sum += i;
//     cout << "sum: " << sum << endl;
//
//     int multi = 1;
//     for (int i : A) multi *= i;
//     cout << "multi: " << multi << endl;
//
//     bool f1 = false;
//     for (int i: A) {
//         if (i > 0) {
//             f1 = true;
//             break;
//         }
//     }
//     cout << "f1: " << f1 << endl;
//
//     bool f2 = true;
//     for (int i: A) {
//         if (i < 0) {
//             f2 = false;
//             break;
//         }
//     }
//     cout << "f2: " << f2 << endl;
//
//     cout << "Исходные данные" << endl;
//     cout << "A:" << endl;
//     for (auto i : A) {
//         cout << i << " ";
//     }
//     cout << endl;
//     cout << "B:" << endl;
//     for (auto i : B) {
//         cout << i << " ";
//     }
//     cout << endl;
//     cout << "N: " << N << endl;
//     bool F = is_persent_good(A, B, N);
//     cout << "F: " << F << endl;
// }