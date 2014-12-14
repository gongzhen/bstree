#ifndef MURPHY_BSTNODET_H
#define MURPHY_BSTNODET_H

template<typename T>
class BSTNodeT {
  public:
    BSTNodeT();
    BSTNodeT(T contents);
    ~BSTNodeT();

    void SetContents(T contents);
    void SetLeft(BSTNodeT *left);
    void SetRight(BSTNodeT *right);
    void IncrementCount();
    void DecrementCount();
    const T GetContents();
    BSTNodeT*& GetLeft();
    BSTNodeT*& GetRight();
    int GetCount();
  private:
    T contents_;
    unsigned int count_added_;
    BSTNodeT *left_ptr;
    BSTNodeT *right_ptr;
};

template<typename T>
BSTNodeT<T>::BSTNodeT() {
  contents_;
  count_added_ = 0;
  left_ptr = NULL;
  right_ptr = NULL;
}

template<typename T>
BSTNodeT<T>::BSTNodeT(T contents) {
  contents_ = contents;
  count_added_ = 0;
  left_ptr = NULL;
  right_ptr = NULL;
}

template<typename T>
BSTNodeT<T>::~BSTNodeT() {
  left_ptr = NULL;
  right_ptr = NULL;
}

template<typename T>
void BSTNodeT<T>::SetContents(T contents) {
  contents_ = contents;
}

template<typename T>
void BSTNodeT<T>::SetLeft(BSTNodeT *left) {
  left_ptr = left;
}

template<typename T>
void BSTNodeT<T>::SetRight(BSTNodeT *right) {
  right_ptr = right;
}

template<typename T>
void BSTNodeT<T>::IncrementCount() {
  count_added_++;
}

template<typename T>
void BSTNodeT<T>::DecrementCount() {
  count_added_--;
}

template<typename T>
const T BSTNodeT<T>::GetContents() {
  return contents_;
}

template<typename T>
BSTNodeT<T>*& BSTNodeT<T>::GetLeft() {
  return left_ptr;
}

template<typename T>
BSTNodeT<T>*& BSTNodeT<T>::GetRight() {
  return right_ptr;
}

template<typename T>
int BSTNodeT<T>::GetCount() {
  return count_added_;
}

#endif
