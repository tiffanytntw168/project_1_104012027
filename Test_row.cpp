#include <iostream>
#include <queue>
#include <stdlib.h>
#include <vector>
#include <fstream>

#define COLS 1001
using namespace std;


int main()
{
    queue<int>row_index,col_index;
    row_index.push(0);
    col_index.push(0);
    vector<int>vec_all,col1,col2,col3;
    int row,col,number;
    
    fstream file,outFile;
	file.open("matrix.data", ios::in); // Open file

	if (file.is_open()) { // If file has correctly opened...
		// Output debug message
		cout << "File correctly opened" << endl;
        file >> row;
        file >> col;
cout <<row<<" "<<col<<endl;
    for(int i=0;i<row+2;i++){
        for(int j=0;j<col+2;j++){
            if(i*j==0 || j>col || i>row){vec_all.push_back(0);}
            else{
                file >> number;
                vec_all.push_back(number);}
            }
    }


	}
	else cout << "Unable to open file" << endl;


    

///*
for (int N=0;N<(col+2)*(row+2);N++){
//for (int N=0;N<5;N++){
    cout << vec_all[N] << " " ;
    if(N%(col+2)==col+1){cout<<endl;}
}
//*/

    /**************col 123*************/
///*
for(int nn=0;nn<row;nn++){
    for (int mm=0;mm<col+1;mm++){
        col1.push_back(vec_all[(col+2)*(0+nn)+mm]);
        col2.push_back(vec_all[(col+2)*(1+nn)+mm]);
        col3.push_back(vec_all[(col+2)*(2+nn)+mm]);
        //cout << "  mm=" << mm << endl;
    }
    cout << "nn:" << nn << endl;
    cout << col1[0] << " " << col1[1] <<" " << col1[2] <<" " <<col1[3] <<" " <<col1[4] << " "<< col1[5] << endl;
    cout << col2[0] << " " << col2[1] <<" " << col2[2] <<" " <<col2[3] <<" " <<col2[4] << col2[5] << endl;
    cout << col3[0] << " " << col3[1] <<" " << col3[2] <<" " <<col3[3] <<" " <<col3[4] << col3[5] << endl;
    cout<<endl;

    col1.clear();col2.clear();col3.clear();
}
}
