#include <iostream>

#include "collection.h"

using namespace std;

//  コンストラクタ
template <typename T>
Collection<T>::Collection(T* array, int length) {
    m_pArray = new int[length];
    m_length = length;
    for (int i = 0; i < m_length; i++) {
        m_pArray[i] = array[i];
    }
}
//  デストラクタ
template <typename T>
Collection<T>::~Collection()
{
    delete[] m_pArray;
}

template <typename T>
T Collection<T>::getMax()
{
    T max = m_pArray[0];
    for(int i = 0; i < m_length ; i++){
        if(max < m_pArray[i]){
            max = m_pArray[i];
        }
    }
    return max;
}

template <typename T>
T Collection<T>::getMin()
{
    T min = m_pArray[0];
    for(int i = 0; i < m_length ; i++){
        if(min > m_pArray[i]){
            min = m_pArray[i];
        }
    }
    return min;
}

template <typename T>
void Collection<T>::showArray(){
    for(int i = 0; i < m_length ; i++){
        cout << m_pArray[i] << " ";
    }
    cout << endl;
}