//int pojavljivanje(int niz[],int n){
//     int i,j,br=0,pom;
//     for(i=0;i<n-1;i++){
//         for(j=i+1;j<n;j++){
//             if(niz[i]>niz[j]){
//                 pom=niz[i];
//                 niz[i]=niz[j];
//                 niz[j]=pom;
//             }
//         }
        
//     }
//     for(i=0;i<n;i++){
//         if(niz[i]!=niz[i+1]&&niz[i]!=niz[i-1])br++;
//     }
//     return br;
// }
// #include <iostream>

// using namespace std;

// int main()
// {   int mat[10][10],i,j,max,n,maxbr;
//     cout<<"unesi n";
//     cin>>n;
//     for(i=0;i<n;i++)
//     for(j=0;j<n;j++){
//         cin>>mat[i][j];
//     }
//     max=0;
//     for(i=0;i<n;i++){
//         if(max<pojavljivanje(mat[i],n)){
//             max=pojavljivanje(mat[i],n);
//             maxbr=i;
//         }
//     }
//     cout<<"vrsta sa najvise el bez ponavljanja je "<<maxbr+1<<" i ima el bez ponavljanja "<<max;
//     return 0;



// int main()
// {int a,b;
// bool flag=false;
//     cout<<"unesi 2 broja";
// cin>>a>>b;
// if(a==b*b||a*a==b){
//     cout<<"jeste";
//     flag=true;
// }
// if(flag==false)cout<<"nije";

//     return 0;

//int i,n,niz[100],pom,m,j;
// printf("unesi n i m:");
// scanf("%d %d",&n,&m);
// for(i=0;i<n;i++)scanf("%d",&niz[i]);
//     for(i=0;i<m;i++){
//         pom=niz[0];
//     for(j=0;j<n;j++){
//         niz[j]=niz[j+1];
//     }
//     niz[n-1]=pom;
//     }
//     for(i=0;i<n;i++)printf("%d",niz[i]);
//     return 0;





////1.	Napisati program kojim se k-ta vrsta matrice A uređuje rastuće. 
//Učitavanje matrice i traženu obradu realizovati pomoću odvojenih potprograma. 
// #include <iostream>

// using namespace std;
// void uredjivanje(int niz[],int n){
//     int i,j,pom;
//     for(i=0;i<n;i++){
//         for(j=i+1;j<n;j++){
//             if(niz[i]>niz[j]){
//                 pom=niz[i];
//                 niz[i]=niz[j];
//                 niz[j]=pom;
//             }
//         }
//     }
// }
// int main()
// {   int i,n,m,j,k,mat[100][100];
//     cout<<"unesi n,m i k";
//     cin>>n>>m>>k;
//     for(i=0;i<m;i++)
//     for(j=0;j<n;j++)
//     cin>>mat[i][j];
//     for(i=0;i<m;i++){
//         if(i==k)uredjivanje(mat[i],n);
//     }
//     for(i=0;i<m;i++){
//         for(j=0;j<n;j++){
//             cout<<mat[i][j];
//         }
//         cout<<endl;
//     }
//     return 0;
// }


////2.Napisati program kojim se određuje da li je matrica A savršena. 
//Matrica je savršena ako je suma elemenata svake vrste veća od nule. Za određivanje 
//sume elemenata u vrsti napraviti funkciju. Učitavanje matrice A uraditi pomoću potprograma 
// #include <iostream>

// using namespace std;
// bool suma(int niz[],int n){
//     int i,suma=0;
//     for(i=0;i<n;i++){
//         suma+=niz[i];
//     }
//     if(suma>0)return true;
//     return false;
// }
// int main()
// {   int i,j,n,m,mat[100][100];
//     bool flag=true;
//     cout<<"uunesi n i m";
//     cin>>n>>m;
//     for(i=0;i<m;i++)
//     for(j=0;j<n;j++){
//         cin>>mat[i][j];
//     }
//     for(i=0;i<m;i++){
//         flag=suma(mat[i],n);
//         if(flag==false){
            
//             cout<<"matrica nije savrsena";
//             break;
//         }
//     }
//     if(flag==true)cout<<"matrica jeste savrsena";
//     return 0;



////3.Napisati program kojim se na izlazu ispisuje 1 ako u 
// //svakoj koloni matrice postoji broj b. 
// //Za ispitivanje napraviti funkciju. Učitavanje matrice A uraditi pomoću potprograma. 
// #include <iostream>

// using namespace std;
// void postojanje(int mat[100][100],int n,int m,int br){
//     int i,j,sum=0;
//     bool flag=false;
//     for(i=0;i<n;i++){
//         for(j=0;j<m;j++){
//             if(mat[j][i]==br){
//                 flag=true;
//                 sum++;
//                 break;
//             }
//             flag=false;
//         }
//     }
//     if(sum==n)printf("1");
    
    
// }
// int main()
// {   int i,j,n,m,mat[100][100],broj;
//     cout<<"uunesi n i m i broj";
//     cin>>n>>m>>broj;
//     for(i=0;i<m;i++)
//     for(j=0;j<n;j++){
//         cin>>mat[i][j];
//     }
//     postojanje(mat,n,m,broj);
//     return 0;
// }