#include <iostream>
#include <vector>
using namespace std;

int findSmallest(const vector<int>& arr){
    int smallest = arr[0];
    int smallest_index = 0;
    for (int i = 0; i < arr.size(); i++){
        if (arr[i] < smallest){
            smallest = arr[i];
            smallest_index = i;
        }
    }
    return smallest_index;

}

vector<int> selectionSort(vector<int>& arr){
    vector<int> newArr;
    while (!arr.empty()){ //enpty() проверяет пустой вектор или нет
        int smallest_index = findSmallest(arr);
        newArr.push_back(arr[smallest_index]); //push_back() добавляет элеменнт в конец вектора
        arr.erase(arr.begin() + smallest_index); //erase() удаляет диапазон элементов от first до last, begin() итератор указывает н апервый элемент
    }
    
    return newArr;
}

int main() {
    vector<int> data = {4, 6, 2, 12, 9, 13, 88, 1, 56, 44};
    vector<int> sorted = selectionSort(data);

    for (int num : sorted){ //диапазонный цикл (range-based)
        cout << num << " ";
    }
    return 0;
}