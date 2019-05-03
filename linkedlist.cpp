#include "linkedlist.h"
#include <fstream>
#include <iostream>
 using namespace std;

linkedlist::linkedlist() {
    head = nullptr;
}

linkedlist::~linkedlist() {
    // RECURSIVE


}

int linkedlist::count(linkedlist list, int counter) {
    // RECURSIVE
    if(list.head == nullptr){
      return 0;
    }
    list.head = list.head->next;
    return count(list, counter++);
}
//Assuming this is to add to front of the list.
void linkedlist::addToFront(int n) {
  node * tmp;

    head->data = n;
    tmp = new node;
    tmp->next = head;
    head = tmp;

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

  fileInput.open(file);
  if(fileInput.is_open()){
  fileInput >> num;
  int largeNum = num;
  cout << largeNum << endl;

  fileInput.open(file);
  if(fileInput.is_open()){
    while(!fileInput.eof()){
        fileInput >> num;
        if(num > largeNum){
          largeNum = num;
        }
      }
    }
  }
}

void linkedlist::writeReversed(string & file) {
    // RECURSIVE
}
