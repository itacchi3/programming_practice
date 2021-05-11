#include <iostream>
#include "collection.h"
 
using namespace std;
 
int main(){
    //  配列変数の定義
    int array[] = { 1,5,4,2,3 };
    Collection<int>* c = new Collection<int>(array,5);
    c->showArray();
    cout << "最大値 : " << c->getMax() << endl;
    cout << "最小値 : " << c->getMin() << endl;
    delete c;
    return 0;
}