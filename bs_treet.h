/*
 * Name        : bs_treet.h
 * Author      : Patrick Murphy
 * Description : binary search tree template
 */
#include "bst_nodet.h"
#include <string>

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
    BSTNodeT* Get(T value);
    string ToStringForwards();
    string ToStringBackwards();

  private:
    BSTNodeT *root_ptr_;
    int size_;

};

BSTreeT::BSTreeT() {

}

BSTreeT::~BSTreeT() {

}

const int BSTreeT::GetSize() {

}

void BSTreeT::Clear() {

}

int BSTreeT::Insert(T value) {

}

bool BSTreeT::Exists(T value) {

}

int BSTreeT::Remove(T value) {

}

template<typename T>
BSTNodeT* BSTreeT::Get(T value) {

}

string BSTreeT::ToStringForwards() {

}

string BSTreeT::ToStringBackwards() {
}
