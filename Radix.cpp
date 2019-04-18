void radixSort(int *a, int arraySize)
{
    vector <int> mybucket[10];
    int i,j,maxVal = 0,digitPosition=1;
    for(i = 0; i < arraySize; i++){
        if(a[i] > maxVal)
            maxVal = a[i];
    }
    int p =1;
    char str[20];
    sprintf( str,"%d",maxVal);
    while( p <= strlen(str) ){
        for(i = 0; i < arraySize; i++)
            mybucket[(a[i]/digitPosition)%10].push_back(a[i]);
        int k = 0;
        for( i = 9;i>=0;i--){
            for(j=0;j<mybucket[i].size();j++){
                a[k++] = mybucket[i][j];
            }
            mybucket[i].clear();
        }
        digitPosition *= 10;
        p+=1;
    }
}
