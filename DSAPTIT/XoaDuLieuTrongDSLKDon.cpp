#include <iostream>

using namespace std;

struct Node {
    int infor;
    Node* next;
};

typedef struct Node* node;

class listLinked {
public:
    node f1;
public:
    listLinked() {
        f1 = NULL;
    }
    node crNode(int value) {
        node tmp = new Node;
        tmp->infor = value;
        tmp->next = NULL;
        return tmp;
    }
    void addNodeLater(int value) {
        if(f1 == NULL) {
            node tmp = crNode(value);
            f1 = tmp;
        }
        else {
            node tmp = crNode(value);
            node p = f1;
            while(p->next != NULL) {
                p = p->next;
            }
            p->next = tmp;
        }
    }
    void eraseNode(int value) {
        node tmp = f1;
        node preNode;
        while(tmp != NULL) {
            if(tmp->infor == value) {
                if(tmp == f1) {
                    f1 = f1->next;
                    tmp = f1;
                }
                else {
                    preNode->next = tmp->next;
                    tmp = tmp->next;
                }
            }
            else {
                preNode = tmp;
                tmp = tmp->next;
            }
        }
    }
    void printList() {
        node tmp = f1;
        while(tmp != NULL) {
            cout << tmp->infor << " ";
            tmp = tmp->next;
        }
        cout << endl;
    }
};

int main() {
    int n;
    listLinked X;
    cin >> n;
    int tmp;
    for(int i = 0; i < n; ++i) {
        cin >> tmp;
        X.addNodeLater(tmp);
    }
    cin >> tmp;
    X.eraseNode(tmp);
    X.printList();
    
}