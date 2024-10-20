#include<bits/stdc++.h>
using namespace std;
#define int long long
#define double long double

struct Stack {
     int size;
     int value;
     Stack* prev;
     int length = 0;
};

/*
Федоров Глеб 24ВП1
Очередь с двусторонним доступом задана, как однонаправленный линеный список целых чисел.
Задана максимальная длина очереди - N.
Реализовать дисциплину обслуживания LIFO - последним пришел, первым ушел
Функции:
• поместить элемент в очередь
• выбрать элемент очереди
• вывести текущее содержимое очереди
• текущая длина очереди
• очередь пуста
• очередь заполнена
*/

Stack* pushElement(Stack*, int);
bool isEmpty(Stack*);
bool isFull(Stack*);
int nowLength(Stack*);
void getElements(Stack*);
int getElementsByIndex(Stack* &top, int index);

signed main() {
     setlocale(LC_ALL, "RUS");

     const int N = 3;
     Stack* stack = new Stack{N};
     cout << endl;
     cout << "Stack: ";
     getElements(stack);
     cout << "is Empty: " << isEmpty(stack) << endl;
     cout << "is Full: " << isFull(stack) << endl;
     cout << "Length Now: " << nowLength(stack) << endl;
     stack = pushElement(stack, 5);
     cout << endl;
     cout << "Stack: ";
     getElements(stack);
     cout << "Length Now: " << nowLength(stack) << endl;
     stack = pushElement(stack, 10);
     cout << endl;
     cout << "Stack: ";
     getElements(stack);
     cout << "Length Now: " << nowLength(stack) << endl;
     cout << "is Empty: " << isEmpty(stack) << endl;
     cout << "is Full: " << isFull(stack) << endl;
     stack = pushElement(stack, 12);
     cout << endl;
     cout << "Stack: ";
     getElements(stack);
     cout << "Length Now: " << nowLength(stack) << endl;
     cout << "is Empty: " << isEmpty(stack) << endl;
     cout << "is Full: " << isFull(stack) << endl;
     int elem = getElementsByIndex(stack, 1);
     cout << endl;
     cout << "Stack: ";
     getElements(stack);
     cout << "Element: " << elem << endl;
     cout << "Length Now: " << nowLength(stack) << endl;
     cout << "is Empty: " << isEmpty(stack) << endl;
     cout << "is Full: " << isFull(stack) << endl;
     stack = pushElement(stack, 25);
     cout << endl;
     cout << "Stack: ";
     getElements(stack);
     cout << "Length Now: " << nowLength(stack) << endl;
     cout << "is Empty: " << isEmpty(stack) << endl;
     cout << "is Full: " << isFull(stack) << endl;
     elem = getElementsByIndex(stack, 0);
     elem = getElementsByIndex(stack, 0);
     elem = getElementsByIndex(stack, 0);
     cout << endl;
     cout << "Stack: ";
     getElements(stack);
     cout << "Length Now: " << nowLength(stack) << endl;
     cout << "is Empty: " << isEmpty(stack) << endl;
     cout << "is Full: " << isFull(stack) << endl;

}

Stack* pushElement(Stack* top, int value) {
     if (top->length < top->size) {
          Stack* newStack = new Stack;
          newStack->size = top->size;
          newStack->value = value;
          newStack->length = top->length+1;
          newStack->prev = top;
          return newStack;
     }
     return top;
}

void getElements(Stack *top) {
     int cnt = 0;
     int lngth = top->length;
     Stack* temp = top;
     while (cnt < lngth) {
          cout << temp->value << " ";
          temp = temp->prev;
          cnt++;
     }
     cout << endl;
}

int getElementsByIndex(Stack* &top, int index) {
     Stack* temp = top;
     int start_length = temp->length;
     int arr_new_stack[start_length-1] {};
     int index_arr = 0;
     int cnt = 0;
     int num = -1;

     while (cnt < start_length) {
          if (start_length - temp->length == index) {
               num = temp->value;
          } else {
               arr_new_stack[index_arr++] = temp->value;
          }
          cnt++;
          temp = temp->prev;
     }

     if (num != -1) {
          int sz = sizeof(arr_new_stack) / sizeof(arr_new_stack[0]);
          Stack* newStack = new Stack;
          for (int i = sz-1; i >= 0; i--) {
               newStack = pushElement(newStack, arr_new_stack[i]);
          }
          top = newStack;
     }

     return num;
}

bool isEmpty(Stack* top) {
     return top->length == 0;
}

bool isFull(Stack* top) {
     return top->length == top->size;
}

int nowLength(Stack* top) {
     return top->length;
}

