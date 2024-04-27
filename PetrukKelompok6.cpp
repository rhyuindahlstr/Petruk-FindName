#include <iostream>
#include <vector>
#include <string>

using namespace std;

bool searchword(vector<string> matrix, string word){
  int rows = matrix.size();
  int cols = matrix[0].size();

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
