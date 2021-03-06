void Merging( int A[], int l, int m, int r ) {
    int i, j, k;
    int[] aux = new int[100];
    for( i = l; i <= r; i++ )
        aux[i] = A[i];
    i = l;
    j = m + 1;
    for( k = l; k <= r; k++ ) {
        if( i > m )
            A[k] = aux[j++];
        else if( j > r )
            A[k] = aux[i++];
        else if( aux[i] <= aux[j] )
             A[k] = aux[i++];
        else
            A[k] = aux[j++];
      // ans += m-i+1 for inversions
    }
}
void MergeSort( int A[], int lo, int hi ) {
    if( lo < hi ) {
        int m = (lo+hi)/2;
        MergeSort(A,lo,m);
        MergeSort(A,m+1,hi);
        Merging(A,lo,m,hi);
    }
}
