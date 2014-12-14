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
#include <sstream>

using std::string;
using std::stringstream;
using std::cout;

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

    int GetSize() const;
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
    int Insert(T value, BSTNodeT<T>*& insert);
    bool Exists(T value, BSTNodeT<T>*& exists);
    int Remove(T value, BSTNodeT<T>*& remove);
    BSTNodeT<T>* Get(T value, BSTNodeT<T>*& get);
    string ToStringForwards(std::ostream &out, BSTNodeT<T>*& stringForward);
    string ToStringBackwards(BSTNodeT<T>*& stringBackwards);
};

template<typename T>
BSTreeT<T>::BSTreeT() {
  root_ptr_ = NULL;
  size_ = 0;
}

template<typename T>
BSTreeT<T>::~BSTreeT() {
  Clear();
}

template<typename T>
int BSTreeT<T>::GetSize() const {
  return size_;
}

template<typename T>
void BSTreeT<T>::Clear() {
  Clear(root_ptr_);
}

template<typename T>
int BSTreeT<T>::Insert(T value) {
  return Insert(value, root_ptr_);
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
  //return ToStringForwards(root_ptr_);
  return "";
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
int BSTreeT<T>::Insert(T value, BSTNodeT<T>*& insert) {
  if (insert == NULL) {
    BSTNodeT<T> *newNode = new BSTNodeT<T>(value);
    insert = newNode;
    cout << "inserted: " << value << "\n";
    size_++;
    return 1;
  } else if (insert->GetContents() > value) {
    Insert(value, insert->GetLeft());
  } else if (insert->GetContents() < value) {
    Insert(value, insert->GetRight());
  } else {
    return 0;
  }
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
  if (remove == NULL) {
    return 0;
  } else if (remove->GetContents() == value) {
    if (remove->GetLeft() == NULL && remove->GetRight() == NULL) {
      // NO CHILD
      delete remove;
      remove = NULL;
      size_--;
    } else if ((remove->GetLeft() != NULL &&  remove->GetRight() == NULL)
        || (remove->GetRight() != NULL && remove->GetLeft() == NULL)) {
      // ONE CHILD
      if (remove->GetLeft() != NULL) {
        BSTNodeT<T> *temp = remove;
        remove = remove->GetLeft();
        delete temp;
        temp = NULL;
        size_--;
      } else if (remove->GetRight() != NULL) {
        BSTNodeT<T> *temp = remove;
        remove = remove->GetRight();
        delete temp;
        temp = NULL;
        size_--;
      }
    } else if (remove->GetLeft() != NULL && remove->GetRight() != NULL) {
      // TWO CHILDREN
     // int minRightTree = FindMin(remove->GetRight());
     // remove->SetContents(minRightTree);
     // Remove(minRightTree, remove->GetRightChild());
    }
  } else if (remove->GetContents() < value) {
    return Remove(value, remove->GetRight());
  } else if (remove->GetContents() > value) {
    return Remove(value, remove->GetLeft());
  } else {
    return 0;
  }
  // Because "function reaches end of non-void"
  return 0;
}

template<typename T>
BSTNodeT<T>* BSTreeT<T>::Get(T value, BSTNodeT<T>*& get) {
  if (get == NULL || root_ptr_ == NULL) {
    return NULL;
  }

  if (get->GetContents() == value) {
    return get;
  }
}

template<typename T>
string BSTreeT<T>::ToStringForwards(std::ostream &out, BSTNodeT<T>*& stringForward) {
  if (stringForward == NULL) {
  }
  return "";
}

template<typename T>
string BSTreeT<T>::ToStringBackwards(BSTNodeT<T>*& stringBackwards) {
  stringstream ss;
  if (stringBackwards != NULL) {
    cout << "Contents: " << stringBackwards->GetContents() << "\n";
    ToStringBackwards(stringBackwards->GetLeft());
    ToStringBackwards(stringBackwards->GetRight());

    ss << stringBackwards->GetContents() << " ";
    cout << "ss: " << ss.str() << "\n";
  }
  return ss.str();

}

#endif
