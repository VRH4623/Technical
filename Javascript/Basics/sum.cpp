void admindroidMain(int size,int arr[][10],int weightageArray[][10]) // Do not modify this line.
{
   for (int i = 0; i < size; ++i) {
        int rowWeightage = 0;
        for (int j = 0; j < size; ++j) {
            rowWeightage += arr[i][j];
        }
        weightageArray[i][0] = rowWeightage; 
    }

    // Calculate the weightage of columns
    for (int j = 0; j < size; ++j) {
        int colWeightage = 0;
        for (int i = 0; i < size; ++i) {
            colWeightage += arr[i][j];
        }
        weightageArray[j][1] = colWeightage;
    }
} 
