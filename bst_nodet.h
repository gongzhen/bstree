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
    BSTNodeT* GetLeft();
    BSTNodeT* GetRight();
    int GetCount();
  private:
    T contents_;
    unsigned int count_added_;
    BSTNodeT *left_ptr;
    BSTNodeT *right_ptr;
};

template<typename T>
BSTNodeT<T>::BSTNodeT() {

}

template<typename T>
BSTNodeT<T>::BSTNodeT(T contents) {

}

template<typename T>
BSTNodeT<T>::~BSTNodeT() {

}

template<typename T>
void BSTNodeT<T>::SetContents(T contents) {

}

template<typename T>
void BSTNodeT<T>::SetLeft(BSTNodeT *left) {

}

template<typename T>
void BSTNodeT<T>::SetRight(BSTNodeT *right) {

}

template<typename T>
void BSTNodeT<T>::IncrementCount() {

}

template<typename T>
void BSTNodeT<T>::DecrementCount() {

}

template<typename T>
const T BSTNodeT<T>::GetContents() {

}

template<typename T>
BSTNodeT<T>* BSTNodeT<T>::GetLeft() {

}

template<typename T>
BSTNodeT<T>* BSTNodeT<T>::GetRight() {

}

template<typename T>
int BSTNodeT<T>::GetCount() {
}
#endif
