#include <iostream>
#include <queue>
#include <stdlib.h>
#include <time.h>

using namespace std;


int main()
{
    queue<int>col_index;
    col_index.push(0);
    //col_index.pop();
    /******initialize array*******/
    srand(time(NULL));
    int row=3,col=10;
    int Array[row][col];

    /*************put elements into array************/
    for (int ii=0;ii<row;ii++){
        for(int jj=0;jj<col;jj++)
            Array[ii][jj]=(rand()%10)+10;
    }

    /**************show array*************/
/*
    for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                cout<<Array[i][j]<<endl;
                //cout<<Array[i]<<endl;
                }
            }
*/
    /**************row123*************/

///*
    int Row1[col],Row2[col],Row3[col];

    for(int i=0;i<col;i++){
        Row1[i]=Array[0][i];
        cout<<Row1[i]<<" ";
    }

    cout<<endl;
    for(int j=0;j<col;j++){
        Row2[j]=Array[1][j];
        cout<<Row2[j]<<" ";
    }

    cout<<endl;
    for(int k=0;k<col;k++){
        Row3[k]=Array[2][k];
        cout<<Row3[k]<<" ";
    }
    cout<<endl;

//int Row4[col]={21,30,19,20,3},Row5[col]={18,40,2,7,25},Row6[col]={6,7,8,9,10};



///*
    for(int kk=1;kk<col-1;kk++){
        if(Row2[kk] > Row1[kk] && Row2[kk] > Row3[kk]){
                if( Row2[kk] > Row2[kk+1] && Row2[kk] > Row2[kk-1]){col_index.push(kk);}
        }

        cout<<"kk:"<<kk<<" col_index_fr:"<<col_index.front()<<" col_index_ba:"<<col_index.back()<<endl;
        }


//*/
    return 0;
}



