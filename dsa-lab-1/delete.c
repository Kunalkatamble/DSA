void main(){
    int a[5]={1,2,3,4,5};
    int pos =1;
    for(int  i=0;i<5;i++){
        if (a[i]==pos){
            a[i]=a[i-1];
            printf("after delet %d", i);
        }
        printf("%d",a[i]);
    }

}