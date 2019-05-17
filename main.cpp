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

void print(const int *arr, const int leng) {
    for(int i(0); i < leng; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int array[] = {110,55,0,55,18,60,19,0,2,0};
    SelectionSort a;
    a.sorting(array, 10);
    print(array, 10);
    return 0;
}