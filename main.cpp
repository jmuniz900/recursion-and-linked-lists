#include <iostream>
#include <string>
#include "linkedlist.cpp"

using namespace std;

void readFile(linkedlist & list, string & file) {

  list.writeInorder(file);

}

int main() {
  linkedlist list;
  string fileName = "list.txt";

  readFile(list, fileName);

    return 0;
}
