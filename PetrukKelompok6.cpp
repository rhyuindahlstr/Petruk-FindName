#include <iostream>
#include <vector>
#include <string>

using namespace std;

bool searchword(vector<string> matrix, string word){
  int rows = matrix.size();
  int cols = matrix[0].size();

// Mencari secara horizontal
    for (int i = 0; i < rows; i++) {
        if (matrix[i].find(word) != string::npos) {
            return true;
        }
    }

// Mencari secara diagonal
    for (int i = 0; i < cols; i++) {
        string colString = "";
        for (int j = 0; j < rows; j++) {
            colString += matrix[j][i];
        }
        if (colString.find(word) != string::npos) {
            return true;
        }
    }

  //Mencari secara diagonal (kiri ke kanan, atas ke bawah)
for (int i = 0; i < rows; i++){
  for (int j = 0; j < cols; j++){
    string diagonal = "";
    for (int k = 0; i + k < rows && j + k < cols; k++){
      diagonal += matrix[i + k][j + k];
      if (diagonal == word){
        return true;
      }
    }
  }
}

//Mencari secara diagonal (kiri ke kanan, bawah ke atas)
for (int i = rows - 1; i >= 0; i--){
  for (int j = 0; j < cols; j++){
    string diagonal = "";
    for (int k = 0; i - k >= 0 && j + k < cols; k++){
      diagonal += matrix[i - k][j + k];
      if (diagonal == word){
        return true;
      }
    }
  }
}
return false;
}
  
int main() {
  int N;
  cin >> N;

  vector<string> words(N);
  for (int i = 0; i < N; i++) {
      cin >> words[i];
  }

  vector<string> matrix = {
        "aaflkhpfssuficiclesgnnh","sfvreomrwlrttsxqqnaoao","qeiaifxaeirfvfysximinji",
        "wstrlgocapbiafiwiwtuacm","feyaeapistpcrlujkoakcers","rvdakpndeehdemsnckkfoah",
        "mrnedslcrriwnrsaafitmmi","yaaecieahymotavhrsstisb","rjsewelccennietohwsglse",
	"atanyymoieesnesioireltr","utenewebhmybetnnraieben","rclkuteaeqjlsgshtgdskoa",
	"bhoicatnrrsddecehoolgit","ensluarirsetalocohctohe","fzfudqjymadoyiwyglovesu",
	"tekalfwonsnaebmiejtzntg","eswposjxeutuyozuwakezhm","kzuhbpezeerflmsnowballh",
	"nsnowboardytvwyclevohsa","acocrolgziychodrazzilbi","lbvkkwanzaaqinwolpwonsl",
	"bfreezingrainslilgtmelt","hqpylwhfmnffufpswxnummv",
  };

  for (int i = 0; i < N; i++) {
      if (searchword(matrix, words[i])) {
          cout << "Ada" << endl;
      } else {
          cout << "Tidak Ada" << endl;
      }
 }

  return 0;
}
