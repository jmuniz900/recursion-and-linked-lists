#include "linkedlist.h"

linkedlist::linkedlist() {
    head = nullptr;
}

linkedlist::~linkedlist() {
    // RECURSIVE
}

int linkedlist::count() {
    // RECURSIVE
}

void linkedlist::addToFront(int n) {
  node * tmp;

  if(head == nullptr){
    head->data = n;
    tmp = new node;
    head->next = tmp;
  }
  else{

  }
}

double linkedlist::average() {
    // uses sum and count functions
}

int linkedlist::sum() {
    // RECURSIVE
}

void linkedlist::writeInorder(string & file) {
  fstream fileInput;
  int num;

  fileInput >> num;
  int largeNum = num;

  fileInput.open(file);
  if(fileInput.is_open()){
    while(!fileInput.eof()){
      fileInput >> num;
      if(largeNum < num){
        largeNum = num;
      }
    }
    addToFront(largeNum);
  }
}

void linkedlist::writeReversed(string & file) {
    // RECURSIVE
}
