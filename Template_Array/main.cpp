#include <iostream>
using namespace std;

template<class T>
class tArray{
    T* arr;
    int count;
public:
    tArray(){
        count = 0;
        arr = new T[count];
    }
    ~tArray(){
        delete[] arr;
    }
    void Add(char d){
        count += 1;
        T* newArr = new T[count];
        for (int i = 0; i < count-1; i++){
            newArr[i] = arr[i];
        }
        newArr[-1] = d;
        arr = newArr;
        delete[] newArr;
    }
    void Del(int pos){
        T* newArr = new T[count-1];
        for(int i = 0; i < count; i++){
            if(i != pos) newArr[i] = arr[i];
        }
        count -= 1;
        arr = newArr;
        delete[] newArr;
    }
};

int main() {
    
}
