/*
 * Name        : bs_treet.h
 * Author      : Patrick Murphy
 * Description : binary search tree template
 */
#ifndef MURPHY_BS_TREE_H
#define MURPHY_BS_TREE_H
#include "bst_nodet.h"
#include <string>
#include <iostream>

using std::string;

template<typename T>
class BSTreeT {
  public:
    /*
     * Constructor
     */
    BSTreeT();

    /*
     * Destructor calls Clear()
     */
    ~BSTreeT();

    const int GetSize();
    void Clear();
    int Insert(T value);
    bool Exists(T value);
    int Remove(T value);
    BSTNodeT<T>* Get(T value);
    string ToStringForwards();
    string ToStringBackwards();

  private:
    BSTNodeT *root_ptr_;
    int size_;

};

template<typename T>
BSTreeT<T>::BSTreeT() {

}

template<typename T>
BSTreeT<T>::~BSTreeT() {

}

template<typename T>
const int BSTreeT<T>::GetSize() {

}

template<typename T>
void BSTreeT<T>::Clear() {

}

template<typename T>
int BSTreeT<T>::Insert(T value) {

}

template<typename T>
bool BSTreeT<T>::Exists(T value) {

}

template<typename T>
int BSTreeT<T>::Remove(T value) {

}

template<typename T>
BSTNodeT<T>* BSTreeT<T>::Get(T value);

template<typename T>
string BSTreeT<T>::ToStringForwards() {

}

template<typename T>
string BSTreeT<T>::ToStringBackwards() {

}
#endif
