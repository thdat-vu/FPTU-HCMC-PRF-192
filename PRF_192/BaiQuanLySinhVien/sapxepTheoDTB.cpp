void sapxepTheoDTB(SV a[], int n) {
    //Sap xep theo DTB tang dan
    SV tmp;
    for(int i = 0;i < n;i++){
        for(int j = i+1; j < n;j++){
            if(a[i].diemTB > a[j].diemTB){
                tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    }
}
