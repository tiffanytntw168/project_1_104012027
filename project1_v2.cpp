#include <iostream>
#include <queue>
#include <stdlib.h>
#include <vector>
#include <fstream>
#include <string.h>

using namespace std;

int main(int argc,char** argv)
{
 /****************Open File*****************/
    if(argc<=1) return 0xAAAA;

    char inFileDir[50]={'\0'};
    char outFileDir[50]{'\0'};
    ifstream inFile;
    ofstream outFile;

    strcat(inFileDir,argv[1]);
    strcat(inFileDir,"/matrix.data");
    strcat(outFileDir,argv[1]);
    strcat(outFileDir,"/final.peak");

    inFile.open(inFileDir,ios::in);
    outFile.open(outFileDir,ios::out);
    //cout << argc << endl;

/****************declaration of parameters*****************/
    queue<int>row_index,col_index;
    row_index.push(0);
    col_index.push(0);
    vector<int>vec_all,row1,row2,row3;
    int row,col,number;
    
/****************Read data from matrix.data*****************/
        inFile >> row;
        inFile >> col;
        cout << "row:" << row << " col:" << col << endl;

    for(int i=0;i<row+2;i++){
        for(int j=0;j<col+2;j++){
            if(i*j==0 || j>col || i>row){vec_all.push_back(-2^31+1);} //邊界放0
            else{inFile >> number;vec_all.push_back(number);}
            }
    }
    
/**************row 123*************/
///*
    for(int nn=0;nn<row;nn++){
        for (int mm=0;mm<col+1;mm++){
            row1.push_back(vec_all[(col+2)*(0+nn)+mm]);
            row2.push_back(vec_all[(col+2)*(1+nn)+mm]);
            row3.push_back(vec_all[(col+2)*(2+nn)+mm]);
    
    }
    
    //cout<<"nn="<< nn <<"      "<< row1[0]<<" "<<row1[1]<<" "<<row1[2]<<" "<<row1[3]<<" "<<row1[4]<<" "<<row1[5]<<endl;
    row1.clear();row2.clear();row3.clear();
    //cout<<row2[0]<<" "<<row2[1]<<" "<<row2[2]<<" "<<row2[3]<<" "<<row2[4]<<endl;
    //cout<<row3[0]<<" "<<row3[1]<<" "<<row3[2]<<" "<<row3[3]<<" "<<row3[4]<<endl;
    //cout<<endl;
    
    for(int kk=0;kk<col+2;kk++){
        if(row2[kk] >= row1[kk] && row2[kk] >= row3[kk])
        {
                if( row2[kk] >= row2[kk+1] && row2[kk] >= row2[kk-1]){
                    row_index.push(kk);col_index.push(nn+1);
                    }
        }    
    }

    //row1.clear();row2.clear();row3.clear();
    
}

///*
int SIZE=col_index.size()-1;
col_index.pop();
row_index.pop();

//outFile.open("final.peak", ios::out);
outFile << SIZE <<endl;

for(int MM=0;MM<SIZE;MM++)
{
    outFile << col_index.front() << " " << row_index.front() << endl;
    
    col_index.pop();
    row_index.pop();
}
//*/

}
