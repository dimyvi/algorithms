#include <iostream>
using namespace std;

int binary_search(int arr[], int size, int num){
    int low = 0;
    int high = size - 1;

    while (low <= high){
        int mid = (low + high)/2;
        int gess = arr[mid];

        if (gess == num){
            return mid;
        }
        if (gess > num){
            high = mid - 1;
        } else { low = mid + 1;
        }
    }
    return -1;

}

int main(){
    int arry[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int lenArr = sizeof(arry) / sizeof(arry[0]);
    int number = 9;
    int index = binary_search(arry, lenArr, number);
    cout<<"индекс числа number: "<<binary_search(arry, lenArr, number)<<endl;
    return 0;
}