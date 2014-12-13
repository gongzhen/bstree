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
    BSTNodeT<T> *root_ptr_;
    int size_;

    // the help
    void Clear(BSTNodeT<T>*& clear);
    void Insert(T value, BSTNodeT<T>*& insert);
    bool Exists(T value, BSTNodeT<T>*& exists);
    int Remove(T value, BSTNodeT<T>*& remove);
    BSTNodeT<T>* Get(T value, BSTNodeT<T>*& get);
    string ToStringForwards(BSTNodeT<T>*& stringForward);
    string ToStringBackwards(BSTNodeT<T>*& stringBackwards);

};

template<typename T>
BSTreeT<T>::BSTreeT() {

}

template<typename T>
BSTreeT<T>::~BSTreeT() {

}

template<typename T>
const int BSTreeT<T>::GetSize() {
  return size_;
}

template<typename T>
void BSTreeT<T>::Clear() {
  Clear(root_ptr_);
}

template<typename T>
int BSTreeT<T>::Insert(T value) {
  Insert(value, root_ptr_);
  return 0;
}

template<typename T>
bool BSTreeT<T>::Exists(T value) {
  return Exists(value, root_ptr_);
}

template<typename T>
int BSTreeT<T>::Remove(T value) {
  return Remove(value, root_ptr_);
}

template<typename T>
BSTNodeT<T>* BSTreeT<T>::Get(T value) {
  return Get(value, root_ptr_);
}

template<typename T>
string BSTreeT<T>::ToStringForwards() {
  return ToStringForwards(root_ptr_);
}

template<typename T>
string BSTreeT<T>::ToStringBackwards() {
  return ToStringBackwards(root_ptr_);
}

template<typename T>
void BSTreeT<T>::Clear(BSTNodeT<T>*& clear) {
  if (clear != NULL) {
    Clear(clear->GetLeft());
    Clear(clear->GetRight());
    delete clear;
    size_--;
    clear = NULL;
  }
}

template<typename T>
void BSTreeT<T>::Insert(T value, BSTNodeT<T>*& insert) {

}

template<typename T>
bool BSTreeT<T>::Exists(T value, BSTNodeT<T>*& exists) {
  if (exists == NULL || root_ptr_ == NULL) {
    return false;
  }

  // If value is root return true
  if (exists->GetContents() == value) {
    return true;
  }

  if (value < exists->GetContents()) {
    // Scan the left tree
  } else {
    // Scan the right tree
  }
}

template<typename T>
int BSTreeT<T>::Remove(T value, BSTNodeT<T>*& remove) {

}

template<typename T>
BSTNodeT<T>* BSTreeT<T>::Get(T value, BSTNodeT<T>*& get) {

}

template<typename T>
string BSTreeT<T>::ToStringForwards(BSTNodeT<T>*& stringForward) {

}

template<typename T>
string BSTreeT<T>::ToStringBackwards(BSTNodeT<T>*& stringBackwards) {

}

#endif
