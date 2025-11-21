#include <iostream>
using namespace std;

// int main(){
//     int array[5] = {1, 2,3,4,5};
//     int* ptr = array;
//     for(int i= 4; i>=0; i--){
//         cout << ptr+i <<endl;
//         cout << *ptr+i<<endl;
//     }
// }

// int main(){
//     int x = 5;
//     int* ptr = &x;
//     int** pptr = &ptr;
//     cout << x<<endl;
//     *ptr = 4;
//     cout << x <<endl;
//     **pptr = 3;
//     cout << x<<endl;
// }

class FloatArray{
    float* arr;

public:
    FloatArray(int size){
        arr = new float[size];
        for(int i=0; i<size; i++){
            arr[i] = 0.0;
        }
        cout << "memory allocated "<< endl;
    }
    void printArray(int arraySize){
        for(int i=0; i<arraySize; i++){
            cout <<arr[i]<<" ";
        }
        cout << endl;
    }
    ~FloatArray(){
        delete[] arr;
        arr = NULL;
        cout << "memory deallocated"<<endl;

    }
};
int main(){
    FloatArray f1(5);
    f1.printArray(5);

}