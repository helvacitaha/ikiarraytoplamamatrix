#include <iostream>

int main()
{
    int dizi1[9];
    int dizi2[9];
    int toplamlar[9];
    for(int i=0;i<9;i++){
        std::cin>>dizi1[i];
    }for(int i=0;i<9;i++){
        std::cin>>dizi2[i];
    }
    for(int i=0;i<9;i++){
        toplamlar[i]=dizi1[i]+dizi2[i];
    }
    for(int i=0;i<9;i++){
        std::cout<<toplamlar[i]<<" ";
        if((i+1)%3==0){
            std::cout<<std::endl;
        }
    }
}
