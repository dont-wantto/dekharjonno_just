#include<stdio.h>
int main(){
    int n,m[100];
    printf("n=",n);
    scanf("%d \n",&n);
int a[100][100];
int i,j;
for(i=0;i<n;i++){
    for(j=0;j<n;j++){

scanf("%d",&a[i][j]);

    }
    printf("\n");
}
int sum[100]={0};
for(i=0;i<n;i++){
    for(j=0;j<n;j++){

sum[i]=sum[i]+a[i][j];

    }
    m[i]=sum[i];
   
}
for(i=0;i<n;i++){
    for(j=0;j<n;j++){

printf("%d ",a[i][j]);

    }
   printf("\t%d\n",sum[i]);
}

int max= m[0],p=0;
for(i=0;i<n;i++){
    if(max<m[i]){
       max=m[i];
        p=i;
    }}
    printf("%d\n%d\n",max,p+1);

return 0;




}