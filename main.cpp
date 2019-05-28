#include <iostream>

using namespace std;

class Sort {
public:
    virtual int *sorting(int *arr, int leng) = 0;
};

///сортировка выбором
class SelectionSort: public Sort {
public:
    int *sorting(int *arr, int leng) override {
        int j;
        for (int i = 0; i < leng; i++){
            j = i;
            for (int k = i; k < leng; k++){
                if (arr[j] > arr[k]) {
                    j = k;
                }
            }
            swap(arr[i], arr[j]);
        }
        return arr;
    }
};

void print(int *arr, int leng) {
    for(int i(0); i < leng; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void doSort(Sort *sort, int *arr, int leng) {
    sort->sorting(arr, leng);
    print(arr, leng);
}

int main() {
    int array[] = {8, 1, 2, 5, 7, 9, 3, 6, 4, 0};
    SelectionSort sort;
    doSort(&sort, array, 10);

    return 0;
}