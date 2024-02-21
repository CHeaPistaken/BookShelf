#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){
  cout << "Enter the bookshelf dimensions";
  cin >> x, y;
  string arr[20] prebooktitles = {"Education", "Math","Computer Science","Calculus","Physics","English","History","Topology","Complex Analysis","Data Structures","SAT","Fun Facts","Medicine","Biology","Chemistry", "Discrete Mathematics","Music","Science","Life","Statistics"}
  string arr[x][y] namearray{};
  cout << "Do you want to autofill the bookshelf or leave it empty? (Type A for autofill or L for leave empty) (Typing anything else will leave the bookshelf empty.)";
  cin >> fillorleave;
  if (strcmp(toupper(fillorleave), "A"){
      for (int i = 0; i < x; i++){
        for (int j = 0; j < y; y++){
          namearray[i][j] = "The Book of " + prebooktitles[rand() % 20];
        }
      }
  }
}


int printShelf(string arr[x][y] arr){
  for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++){
    for (int j = 0; j < sizeof(arr[0])/sizeof(arr[0][0]); j++){
      if (j != sizeof(arr[0])/sizeof(arr[0][0])-1){
      cout << arr[i][j] + " ";
      }
      
    }
    cout << "\n";
  }
}
  
