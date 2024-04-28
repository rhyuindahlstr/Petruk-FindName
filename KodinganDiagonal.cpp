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
