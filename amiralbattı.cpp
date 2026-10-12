#include <iostream>
#include <cstdlib>
#include <ctime>


int main(){

    srand(time(0));

    do{
    int number1,m,ships2=-1;
    int number2[5][5]{

        {3,2,4,1,5},
        {9,2,7,1,5},
        {4,3,6,5,1},
        {8,5,0,3,5},
        {1,4,5,2,6}
    };

    for(int i=0; i<5;i++){

        m=0;
        for(m=0;m<5;m++){

            number1=rand()%2;
            number2[i][m]=number1;
            if(number2[i][m]){

                ships2++;
            }
        }
        
    }

    int shoot,mycount=0,row,column;
    

    while(0<ships2){

        std::cout<<"enter your row: ";
        std::cin>>row;
        std::cout<<"enter your column: ";
        std::cin>>column;
        if(row>4 || column>4){

            std::cout<<"please enter a less then 5!\n"; 
            continue;
        }
        if(number2[row][column]){

            number2[row][column]=0;
           std::cout<<"you shoot the ships!\n";
            ships2--;
            std::cout<<"total ships count:"<<ships2<<"\n";
            mycount++;
        }else{
            std::cout<<"you missed the ships!\n";
            std::cout<<"try again!\n";
            mycount++;
        }
        
    }
    int dec=1;
    std::cout<<"you won the game here this is your total shoot"<<mycount<<"\n";
    std::cout<<"you want to try again?(1 for yes 0 for no)\n";
    std::cin>>dec;
    }while(std::dec);


return 0;
   
}