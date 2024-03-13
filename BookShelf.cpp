#include <iostream>
#include <vector>
#include <string>
#include <bits/stdc++.h>
#include <cstring>

using namespace std;

int main(){
  cout << "Enter the bookshelf dimensions";
  int x, y; cin >> x, y;
  string namearr[x][y];
  string prebooktitles[20]  = {"Education", "Math","Computer Science","Calculus","Physics","English","History","Topology","Complex Analysis","Data Structures","SAT","Fun Facts","Medicine","Biology","Chemistry", "Discrete Mathematics","Music","Science","Life","Statistics"};
  namearr[x][y] = {};
  cout << "Do you want to autofill the bookshelf or leave it empty? (Type A for autofill or L for leave empty) (Typing anything else will leave the bookshelf empty.)";
  string fillorleave; cin >> fillorleave;
  if (strcmp(fillorleave, "A")){
      for (int i = 0; i < x; i++){
        for (int j = 0; j < y; y++){
          namearr[i][j] = "The Book of " + prebooktitles[rand() % 20];
        }
      }
  }
}


int printShelf(string arr[][20]){
  for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++){
    for (int j = 0; j < sizeof(arr[0])/sizeof(arr[0][0]); j++){
      if (j != sizeof(arr[0])/sizeof(arr[0][0])-1){
      cout << arr[i][j] + " ";
      }
      
    }
    cout << "\n";
  }
}
  
