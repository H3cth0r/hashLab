#include <iostream>
#include <list>
#include <functional>
using namespace std;
#include "hashTable.h"


int main() {
  int llaves[] = {9818,9342,5812,5607,2388,9035,6575,8363,6610,191};

  Hashtable<int,int> tabla(11);
  // tabla.print();
  for(int i = 0; i < 10; i++){
    tabla.put(llaves[i], i + 10);
  }

  tabla.put(1191, 500);
  // tabla.print();

  cout << tabla.get(1191) << endl;
  cout << tabla.get(5566) << endl;

  Hashtable<string,int> eternals(10);
  // if(eternals.is_empty()) cout << "is empty !!" << endl;
  eternals.put("Thena", 7000);
  eternals.put("Kingo", 6500);
  eternals.put("Ikaris", 6250);
  // eternals.print();

  Hashtable<string,int> avengers(10);
  avengers.put_all(eternals);
  // avengers.print();
  // eternals.print();
  // eternals.remove("Thena");
  
  // cout <<  eternals.contains_key("Th") << endl;

  // cout << eternals.get_or_default("Thena") << endl;

  // eternals.clear();
  eternals.print();
  cout << "================" << endl;
  avengers.print();

  cout << "is_empty: " << eternals.is_empty() << endl;
  cout << "size: "<< eternals.the_size() << endl;

  if(eternals == avengers)cout << "same! " << endl;
  else cout << "not the same" << endl;

} 