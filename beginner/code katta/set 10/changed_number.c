int main(void) {
	int n,a[20],i;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
    scanf("%d",&a[i]);}
    for(i=1;i<=n;i++)
   {
        if(a[i]!=i){
       printf("%d",i);
       }
     }
	return 0;
}
