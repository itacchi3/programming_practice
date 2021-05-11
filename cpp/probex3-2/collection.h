#ifndef _COLLECTION_H_
#define _COLLECTION_H_

template<typename T>
class Collection {
private:
    //  配列データ
    T* m_pArray;
    //  配列の長さ
    int m_length;

public:
    //  コンストラクタ
    Collection(T* array, int length);
    //  デストラクタ
    ~Collection();
    //  最大値の取得
    T getMax();
    //  最小値の取得
    T getMin();
    //  成分の表示
    void showArray();
};

#endif  // _COLLECTIONINT_H_