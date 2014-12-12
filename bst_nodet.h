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
    BSTNodeT& GetLeft();
    BSTNodeT& GetRight();
    int GetCount();
  private:
    T contents_;
    unsigned int count_added_;
    BSTNodeT *left_ptr;
    BSTNodeT *right_ptr;
};

BSTNodeT::BSTNodeT() {

}

BSTNodeT::BSTNodeT(T contents) {

}

BSTNodeT::~BSTNodeT() {

}

void BSTNodeT::SetContents(T contents) {

}

void BSTNodeT::SetLeft(BSTNodeT *left) {

}

void BSTNodeT::SetRight(BSTNodeT *right) {

}

void BSTNodeT::IncrementCount() {

}

void BSTNodeT::DecrementCount() {

}

const T BSTNodeT::GetContents() {

}

BSTNodeT& BSTNodeT::GetLeft() {

}

BSTNodeT& BSTNodeT::GetRight() {

}

int BSTNodeT::GetCount() {
}
