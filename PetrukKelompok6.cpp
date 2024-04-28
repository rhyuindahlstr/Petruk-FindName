//Anggota Kelompok :
//Muhammad Alvin (2317051040)
//Intan Nur Laila (2317051109)
//Rahayu Indah Lestari (2317051073)

#include <iostream>
#include <vector>
#include <string>

using namespace std;

bool searchword(vector<string> matrix, string word){
  int baris = matrix.size();
  int kolom = matrix[0].size();

// Mencari secara horizontal
    for (int i = 0; i < baris; i++) {
        if (matrix[i].find(word) != string::npos) {
            return true;
        }
    }

// Mencari secara vertikal
    for (int i = 0; i < kolom; i++) {
        string cols = "";
        for (int j = 0; j < baris; j++) {
            cols += matrix[j][i];
        }
        if (cols.find(word) != string::npos) {
            return true;
        }
    }


// Mencari secara diagonal
    for (int i = 0; i < kolom; i++) {
        string cols = "";
        for (int j = 0; j < baris; j++) {
            cols += matrix[j][i];
        }
        if (cols.find(word) != string::npos) {
            return true;
        }
    }

  //Mencari secara diagonal (kiri ke kanan, atas ke bawah)
for (int i = 0; i < baris; i++){
  for (int j = 0; j < kolom; j++){
    string diagonal = "";
    for (int k = 0; i + k < baris && j + k < kolom; k++){
      diagonal += matrix[i + k][j + k];
      if (diagonal == word){
        return true;
      }
    }
  }
}

//Mencari secara diagonal (kiri ke kanan, bawah ke atas)
for (int i = baris - 1; i >= 0; i--){
  for (int j = 0; j < kolom; j++){
    string diagonal = "";
    for (int k = 0; i - k >= 0 && j + k < kolom; k++){
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

cout << endl;

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
