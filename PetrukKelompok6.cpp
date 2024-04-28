//Kelompok 6 Pemrograman Terstruktur
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

	
	// Mencari secara vertical
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
                {'a','l','v','i','n','h','p','t','o','s','e','r','b','a','i','c','l','e','m','g','n','n','h'},
		{'q','f','v','r','e','o','m','r','w','l','r','t','t','s','n','o','q','q','n','a','o','a','o'},
		{'w','e','i','a','i','f','x','a','e','i','r','f','v','f','d','w','x','i','m','i','n','j','i'},
		{'w','s','t','r','l','g','o','c','a','p','b','i','a','f','o','o','i','w','t','u','a','c','m'},
		{'f','r','e','y','a','a','i','s','t','p','c','r','l','u','n','k','o','a','k','c','e','r','s'},
		{'r','a','d','a','k','p','n','d','e','e','h','d','e','m','e','n','c','k','k','f','o','a','h'},
		{'m','h','n','e','d','s','l','c','r','r','i','w','n','r','s','a','a','f','i','t','m','m','i'},
		{'y','a','a','e','c','i','e','a','h','y','m','o','t','a','i','h','r','s','s','t','i','s','b'},
		{'r','y','s','e','w','e','l','c','c','e','n','n','i','e','a','o','h','w','s','g','l','s','e'},
		{'a','u','a','n','y','y','m','o','i','e','e','s','n','e','s','i','o','i','r','e','l','t','r'},
		{'u','t','e','n','e','w','e','b','h','m','y','b','e','t','n','n','r','a','i','e','b','e','n'},
		{'r','c','l','k','u','t','e','a','e','q','j','l','s','g','s','h','t','g','d','s','k','o','a'},
		{'b','h','o','i','c','a','t','n','r','r','s','d','d','e','c','e','h','o','o','l','g','i','t'},
		{'e','n','s','l','n','a','r','i','r','s','e','t','a','l','o','c','o','h','c','t','o','h','e'},
		{'f','z','f','u','d','t','j','y','m','a','d','o','h','i','w','y','g','l','o','v','e','s','u'},
		{'t','e','k','a','l','f','a','o','n','s','n','a','e','o','m','i','e','j','t','z','n','t','g'},
		{'e','s','w','p','o','s','j','n','e','u','t','u','y','o','c','u','w','a','k','e','z','h','m'},
		{'k','z','u','h','b','p','e','z','e','e','r','f','l','m','s','k','o','w','b','a','l','l','h'},
		{'n','s','n','o','w','b','o','a','r','d','y','t','v','w','y','c','e','e','v','o','h','s','a'},
		{'a','c','o','c','r','o','l','g','z','i','y','c','h','o','d','r','a','y','z','i','l','b','i'},
		{'l','b','v','k','k','w','a','n','z','a','a','q','i','n','w','o','p','u','b','g','n','s','l'},
		{'b','f','r','e','e','z','i','n','g','r','a','i','n','s','l','i','l','g','t','m','e','l','t'},
		{'h','q','p','p','a','k','d','i','d','i','k','f','u','f','p','s','w','i','l','k','o','m','v'},
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
